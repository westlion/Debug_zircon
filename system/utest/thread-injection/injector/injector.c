// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <inttypes.h>
#include <launchpad/launchpad.h>
#include <launchpad/vmo.h>
#include <zircon/process.h>
#include <zircon/processargs.h>
#include <zircon/syscalls.h>
#include <stdio.h>
#include <stdlib.h>

#include "../private.h"

#define HELPER "/boot/bin/thread-injection-injected"

int main(void) {
    zx_handle_t h = zx_get_startup_handle(PA_HND(PA_USER0, 0));
    if (h == ZX_HANDLE_INVALID) {
        fprintf(stderr, "zx_get_startup_handle: %d\n", h);
        return 1;
    }

    // Read the message from the main test program, so we have
    // its process and VMAR handles and know where its bits are.
    struct helper_data data;
    uint32_t bytes = sizeof(data);
    zx_handle_t handles[2];
    uint32_t nhandles = countof(handles);
    zx_status_t status = zx_channel_read(h, 0, &data, handles, bytes,
                                         nhandles, &bytes, &nhandles);
    if (status != ZX_OK) {
        fprintf(stderr, "zx_channel_read: %d\n", status);
        return 1;
    }
    if (bytes != sizeof(data)) {
        fprintf(stderr, "read %u bytes instead of %zu\n", bytes, sizeof(data));
        return 1;
    }
    if (nhandles != countof(handles)) {
        fprintf(stderr, "read %u handles instead of %zu\n", nhandles,
                countof(handles));
        return 1;
    }

    const zx_handle_t proc = handles[0];
    const zx_handle_t vmar = handles[1];

    // Load up the launchpad with the injected program.  This works just
    // like normal program launching, but it goes into a process that
    // already exists (and has another program running in it!).
    launchpad_t* lp;
    status = launchpad_create_with_process(proc, vmar, &lp);
    if (status != ZX_OK) {
        fprintf(stderr, "launchpad_create_with_process: %d\n", status);
        return 1;
    }

    zx_handle_t vmo;
    status = launchpad_vmo_from_file(HELPER, &vmo);
    if (status != ZX_OK) {
        fprintf(stderr, "launchpad_vmo_from_file: %d\n", status);
        return 1;
    }

    status = launchpad_elf_load(lp, vmo);
    if (status != ZX_OK) {
        fprintf(stderr, "launchpad_elf_load: %d\n", status);
        return 1;
    }

    // The injected program gets an argument string telling it an
    // address in its own address space (aka the injectee process).
    char buf[32];
    snprintf(buf, sizeof(buf), "%#" PRIxPTR, (uintptr_t)data.futex_addr);
    const char *argv[] = { HELPER, buf };
    status = launchpad_set_args(lp, 2, argv);
    if (status != ZX_OK) {
        fprintf(stderr, "launchpad_arguments: %d\n", status);
        return 1;
    }

    // Launch the injected program with a new thread.  It gets as
    // its argument the handle number for its end of its bootstrap pipe,
    // which the main test program told us in the helper_data message.
    // (We're reusing the pipe we got helper_data on as the injected
    // program's bootstrap pipe, though the two uses are unrelated.)
    // Launchpad will send the bootstrap messages on our end of the pipe.
    status = launchpad_start_injected(lp, "injected", h, data.bootstrap);
    zx_handle_close(h);
    if (status != ZX_OK) {
        fprintf(stderr, "launchpad_start_injected: %d\n", status);
        return 1;
    }

    launchpad_destroy(lp);

    return 0;
}
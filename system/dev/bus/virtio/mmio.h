// Copyright 2017 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <zircon/compiler.h>

// clang-format off

struct virtio_mmio_config {
    /* 0x00 */
    uint32_t magic;
    uint32_t version;
    uint32_t device_id;
    uint32_t vendor_id;
    /* 0x10 */
    uint32_t device_features;
    uint32_t device_features_sel;
    uint32_t __reserved0[2];
    /* 0x20 */
    uint32_t driver_features;
    uint32_t driver_features_sel;
    uint32_t guest_page_size;
    uint32_t __reserved1[1];
    /* 0x30 */
    uint32_t queue_sel;
    uint32_t queue_num_max;
    uint32_t queue_num;
    uint32_t queue_align;
    /* 0x40 */
    uint32_t queue_pfn;
    uint32_t __reserved2[3];
    /* 0x50 */
    uint32_t queue_notify;
    uint32_t __reserved3[3];
    /* 0x60 */
    uint32_t interrupt_status;
    uint32_t interrupt_ack;
    uint32_t __reserved4[2];
    /* 0x70 */
    uint32_t status;
    uint8_t __reserved5[0x8c];
    /* 0x100 */
    uint32_t config[0];
};

static_assert(sizeof(struct virtio_mmio_config) == 0x100, "");

#define VIRTIO_MMIO_MAGIC 0x74726976 // 'virt'

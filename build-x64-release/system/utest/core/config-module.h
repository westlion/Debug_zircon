#pragma once
#define BUILD_COMBINED_TESTS 1
#define MODULE_LIBS "system/ulib/unittest_system/ulib/mini-process_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/fbl_system/ulib/runtime_system/ulib/sync__system/utest/core/threads/test-threads"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/kernel/lib/vdso_-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/ddk/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/mini-process/gen/include_-I./build-x64-release/system/ulib/runtime/gen/include_-I./build-x64-release/system/ulib/sync/gen/include_-I./build-x64-release/system/ulib/unittest/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/utest/core/threads/test-threads/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/fbl/include_-Isystem/ulib/mini-process/include_-Isystem/ulib/runtime/include_-Isystem/ulib/sync/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/utest/core/include_-Isystem/utest/core/threads/test-threads/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/kernel/lib/vdso/vdso-code.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/ddk/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/mini-process/gen-hdr.stamp_./build-x64-release/system/ulib/runtime/gen-hdr.stamp_./build-x64-release/system/ulib/sync/gen-hdr.stamp_./build-x64-release/system/ulib/unittest/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/utest/core/threads/test-threads/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/core/bad-syscall/bad-syscall.c_system/utest/core/bad-syscall/syscall.S_system/utest/core/c11-condvar/condvar.c_system/utest/core/c11-mutex/mutex.c_system/utest/core/c11-thread/thread.c_system/utest/core/channel/channel.c_system/utest/core/cookies/cookies.c_system/utest/core/echo/echo.c_system/utest/core/echo/message.c_system/utest/core/echo/struct.c_system/utest/core/elf-tls/tls.cpp_system/utest/core/event-pair/event-pair.c_system/utest/core/fifo/fifo.c_system/utest/core/futex/futex.cpp_system/utest/core/handle-info/handle-info.c_system/utest/core/handle-transfer/handle-transfer.c_system/utest/core/handle-wait/handle-wait.c_system/utest/core/interrupt/interrupt-test.c_system/utest/core/job/jobs.c_system/utest/core/main.c_system/utest/core/memory-mapping/memory-mapping.cpp_system/utest/core/object-info/object-info.cpp_system/utest/core/port/ports.cpp_system/utest/core/process/process.cpp_system/utest/core/profile/profile.c_system/utest/core/pthread-barrier/barrier.c_system/utest/core/pthread-tls/tls-test.c_system/utest/core/pthread/pthread.cpp_system/utest/core/resource/resource.c_system/utest/core/socket/socket.c_system/utest/core/stack/stack-test.c_system/utest/core/sync-completion/completion.cpp_system/utest/core/sync-completion/main.c_system/utest/core/threads/register-set.c_system/utest/core/threads/threads.c_system/utest/core/time/ticks.c_system/utest/core/vmar/vmar.cpp_system/utest/core/vmo-signal/vmo-signal.c_system/utest/core/zxr-mutex/mutex.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/fbl_system/ulib/mini-process_system/ulib/runtime_system/ulib/sync_system/ulib/unittest_system/ulib/zircon_system/utest/core/threads/test-threads"
#define MODULE_TYPE "userapp"


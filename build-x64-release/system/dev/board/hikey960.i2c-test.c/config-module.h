#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/c_system/ulib/zircon"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/sync"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/ddk/gen/include_-I./build-x64-release/system/ulib/driver/gen/include_-I./build-x64-release/system/ulib/sync/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/board/hikey960/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/ddk/gen-hdr.stamp_./build-x64-release/system/ulib/driver/gen-hdr.stamp_./build-x64-release/system/ulib/sync/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/board/hikey960/hikey960-i2c-test.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "driver"


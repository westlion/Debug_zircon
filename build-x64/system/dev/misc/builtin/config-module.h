#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/driver/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/misc/builtin/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/fdio/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/driver/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/misc/builtin/null.c_system/dev/misc/builtin/root.c_system/dev/misc/builtin/zero.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/fdio_system/ulib/zircon"
#define MODULE_TYPE "driver"


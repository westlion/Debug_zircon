#pragma once
#define MODULE_LIBS "system/ulib/fs-management_system/ulib/zircon_system/ulib/fdio_system/ulib/c"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/fs-management/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/uapp/fs-mount/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/fs-management/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/fs-mount/main.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/fs-management_system/ulib/zircon"
#define MODULE_TYPE "userapp"


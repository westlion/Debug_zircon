#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/fdio_system/ulib/c"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/driver/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-Iglobal/include_-Isystem/core/devmgr/include_-Isystem/ulib/c/include_-Isystem/ulib/driver/include_-Isystem/ulib/fdio/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/driver/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/core/devmgr/devhost-main.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/driver_system/ulib/fdio"
#define MODULE_TYPE "userapp"

#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/pretty"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/fdio/gen/include_-I./build-arm64-release/system/ulib/pretty/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/uapp/psutils/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/pretty/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/fdio/gen-hdr.stamp_./build-arm64-release/system/ulib/pretty/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/psutils/kstats.c_system/uapp/psutils/resources.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/pretty_system/ulib/zircon"
#define MODULE_TYPE "userapp"


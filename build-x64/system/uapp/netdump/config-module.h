#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/pretty_system/ulib/inet6"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/inet6/gen/include_-I./build-x64/system/ulib/pretty/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/uapp/netdump/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/inet6/include_-Isystem/ulib/pretty/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/inet6/gen-hdr.stamp_./build-x64/system/ulib/pretty/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/netdump/netdump.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/inet6_system/ulib/pretty_system/ulib/zircon"
#define MODULE_TYPE "userapp"


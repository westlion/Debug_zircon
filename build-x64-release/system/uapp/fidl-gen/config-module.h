#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/runtime_system/ulib/fidl"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/uapp/fidl-gen/interfaces/gen/include_-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/fidl/gen/include_-I./build-x64-release/system/ulib/runtime/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/uapp/fidl-gen/include_-Isystem/uapp/fidl-gen/interfaces/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fidl/include_-Isystem/ulib/runtime/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/uapp/fidl-gen/interfaces/gen-hdr.stamp_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/fidl/gen-hdr.stamp_./build-x64-release/system/ulib/runtime/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/fidl-gen/main.c"
#define MODULE_HEADER_DEPS "system/uapp/fidl-gen/interfaces_system/ulib/c_system/ulib/fdio_system/ulib/fidl_system/ulib/runtime_system/ulib/zircon"
#define MODULE_TYPE "userapp"


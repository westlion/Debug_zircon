#pragma once
#define MODULE_LIBS "system/ulib/fs-management_system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/block-client_system/ulib/sync"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/block-client/gen/include_-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/fs-management/gen/include_-I./build-arm64-clang/system/ulib/sync/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/uapp/iotime/include_-Isystem/ulib/block-client/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/block-client/gen-hdr.stamp_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/fs-management/gen-hdr.stamp_./build-arm64-clang/system/ulib/sync/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/iotime/iotime.c"
#define MODULE_HEADER_DEPS "system/ulib/block-client_system/ulib/c_system/ulib/fdio_system/ulib/fs-management_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "userapp"


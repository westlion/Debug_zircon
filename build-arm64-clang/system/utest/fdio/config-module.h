#pragma once
#define MODULE_LIBS "system/ulib/zircon_system/ulib/c_system/ulib/fdio_system/ulib/unittest_"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/utest/fdio/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/fdio/fdio_handle_fd.c_system/utest/fdio/fdio_open_max.c_system/utest/fdio/fdio_path_canonicalize.c_system/utest/fdio/fdio_root.c_system/utest/fdio/fdio_socketpair.c_system/utest/fdio/main.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/unittest_system/ulib/zircon"
#define MODULE_TYPE "usertest"


#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fdio_system/ulib/fs-management_system/ulib/unittest_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/fbl_system/ulib/ddk_system/ulib/sync_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/ddk/gen/include_-I./build-arm64-clang/system/ulib/fbl/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/fs-management/gen/include_-I./build-arm64-clang/system/ulib/sync/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-I./build-arm64-clang/system/ulib/zx/gen/include_-I./build-arm64-clang/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/dev/nand/ram-nand_-Isystem/dev/nand/ram-nand/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/sync/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/ddk/gen-hdr.stamp_./build-arm64-clang/system/ulib/fbl/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/fs-management/gen-hdr.stamp_./build-arm64-clang/system/ulib/sync/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp_./build-arm64-clang/system/ulib/zx/gen-hdr.stamp_./build-arm64-clang/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/nand/ram-nand/ram-nand.cpp_system/dev/nand/ram-nand/test/main.cpp_system/dev/nand/ram-nand/test/ram-nand-ctl.cpp_system/dev/nand/ram-nand/test/ram-nand.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/fbl_system/ulib/fdio_system/ulib/fs-management_system/ulib/sync_system/ulib/unittest_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"


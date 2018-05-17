#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fs-management_system/ulib/zircon_system/ulib/fdio_system/ulib/unittest_"
#define MODULE_STATIC_LIBS "system/ulib/block-client_system/ulib/sync_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/block-client/gen/include_-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/fdio/gen/include_-I./build-arm64-release/system/ulib/fs-management/gen/include_-I./build-arm64-release/system/ulib/sync/gen/include_-I./build-arm64-release/system/ulib/unittest/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-I./build-arm64-release/system/ulib/zx/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/block-client/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/sync/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/ramdisk/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/block-client/gen-hdr.stamp_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/fdio/gen-hdr.stamp_./build-arm64-release/system/ulib/fs-management/gen-hdr.stamp_./build-arm64-release/system/ulib/sync/gen-hdr.stamp_./build-arm64-release/system/ulib/unittest/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp_./build-arm64-release/system/ulib/zx/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/ramdisk/main.c_system/utest/ramdisk/ramdisk.cpp"
#define MODULE_HEADER_DEPS "system/ulib/block-client_system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/fs-management_system/ulib/sync_system/ulib/unittest_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"


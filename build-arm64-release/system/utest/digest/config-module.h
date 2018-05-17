#pragma once
#define MODULE_LIBS "system/ulib/unittest_system/ulib/digest_system/ulib/zircon_system/ulib/c_system/ulib/fdio_"
#define MODULE_STATIC_LIBS "third_party/ulib/uboringssl_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/digest/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/fdio/gen/include_-I./build-arm64-release/system/ulib/unittest/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-I./build-arm64-release/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/digest/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/digest/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/digest/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/fdio/gen-hdr.stamp_./build-arm64-release/system/ulib/unittest/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp_./build-arm64-release/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/digest/digest.cpp_system/utest/digest/main.c_system/utest/digest/merkle-tree.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/digest_system/ulib/fbl_system/ulib/fdio_system/ulib/unittest_system/ulib/zircon_system/ulib/zxcpp_third_party/ulib/uboringssl"
#define MODULE_TYPE "usertest"


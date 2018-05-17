#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/zircon_system/ulib/fdio_system/ulib/crypto_system/ulib/digest_system/ulib/fs-management_system/ulib/unittest_system/ulib/zxcrypt_"
#define MODULE_STATIC_LIBS "third_party/ulib/cryptolib_third_party/ulib/uboringssl_system/ulib/block-client_system/ulib/ddk_system/ulib/fvm_system/ulib/fs_system/ulib/gpt_system/ulib/pretty_system/ulib/sync_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/block-client/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/crypto/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/digest/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/fs-management/gen/include_-I./build-x64/system/ulib/fs/gen/include_-I./build-x64/system/ulib/fvm/gen/include_-I./build-x64/system/ulib/gpt/gen/include_-I./build-x64/system/ulib/pretty/gen/include_-I./build-x64/system/ulib/sync/gen/include_-I./build-x64/system/ulib/unittest/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-I./build-x64/system/ulib/zxcrypt/gen/include_-I./build-x64/third_party/ulib/cryptolib/gen/include_-I./build-x64/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/ulib/block-client/include_-Isystem/ulib/c/include_-Isystem/ulib/crypto/include_-Isystem/ulib/ddk/include_-Isystem/ulib/digest/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/fs/include_-Isystem/ulib/fvm/include_-Isystem/ulib/gpt/include_-Isystem/ulib/pretty/include_-Isystem/ulib/sync/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/ulib/zxcrypt/include_-Isystem/utest_-Isystem/utest/zxcrypt/include_-Ithird_party/ulib/cryptolib/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/block-client/gen-hdr.stamp_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/crypto/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/digest/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/fs-management/gen-hdr.stamp_./build-x64/system/ulib/fs/gen-hdr.stamp_./build-x64/system/ulib/fvm/gen-hdr.stamp_./build-x64/system/ulib/gpt/gen-hdr.stamp_./build-x64/system/ulib/pretty/gen-hdr.stamp_./build-x64/system/ulib/sync/gen-hdr.stamp_./build-x64/system/ulib/unittest/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp_./build-x64/system/ulib/zxcrypt/gen-hdr.stamp_./build-x64/third_party/ulib/cryptolib/gen-hdr.stamp_./build-x64/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/zxcrypt/main.c_system/utest/zxcrypt/test-device.cpp_system/utest/zxcrypt/volume.cpp_system/utest/zxcrypt/zxcrypt.cpp"
#define MODULE_HEADER_DEPS "system/ulib/block-client_system/ulib/c_system/ulib/crypto_system/ulib/ddk_system/ulib/digest_system/ulib/fbl_system/ulib/fdio_system/ulib/fs_system/ulib/fs-management_system/ulib/fvm_system/ulib/gpt_system/ulib/pretty_system/ulib/sync_system/ulib/unittest_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp_system/ulib/zxcrypt_third_party/ulib/cryptolib_third_party/ulib/uboringssl"
#define MODULE_TYPE "usertest"


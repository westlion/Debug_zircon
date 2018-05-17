#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/driver_system/ulib/zircon_system/ulib/fdio_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/ddktl_system/ulib/fs_system/ulib/fvm_system/ulib/gpt_system/ulib/digest_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_system/ulib/sync_third_party/ulib/uboringssl_"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/ddk/gen/include_-I./build-x64-release/system/ulib/ddktl/gen/include_-I./build-x64-release/system/ulib/digest/gen/include_-I./build-x64-release/system/ulib/driver/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/fs/gen/include_-I./build-x64-release/system/ulib/fvm/gen/include_-I./build-x64-release/system/ulib/gpt/gen/include_-I./build-x64-release/system/ulib/sync/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zx/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-I./build-x64-release/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/dev/block/fvm/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/ddktl/include_-Isystem/ulib/digest/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs/include_-Isystem/ulib/fvm/include_-Isystem/ulib/gpt/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/ddk/gen-hdr.stamp_./build-x64-release/system/ulib/ddktl/gen-hdr.stamp_./build-x64-release/system/ulib/digest/gen-hdr.stamp_./build-x64-release/system/ulib/driver/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/fs/gen-hdr.stamp_./build-x64-release/system/ulib/fvm/gen-hdr.stamp_./build-x64-release/system/ulib/gpt/gen-hdr.stamp_./build-x64-release/system/ulib/sync/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zx/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp_./build-x64-release/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/block/fvm/fvm.c_system/dev/block/fvm/fvm.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/ddktl_system/ulib/digest_system/ulib/driver_system/ulib/fbl_system/ulib/fdio_system/ulib/fs_system/ulib/fvm_system/ulib/gpt_system/ulib/sync_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp_third_party/ulib/uboringssl"
#define MODULE_TYPE "driver"


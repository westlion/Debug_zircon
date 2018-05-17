#pragma once
#define MODULE_LIBS "system/ulib/c"
#define MODULE_STATIC_LIBS "third_party/ulib/uboringssl_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/zxcpp/gen/include_-I./build-arm64/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/digest/include_-Isystem/ulib/fbl/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/zxcpp/gen-hdr.stamp_./build-arm64/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/digest/digest.cpp_system/ulib/digest/merkle-tree.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/zxcpp_third_party/ulib/uboringssl"
#define MODULE_TYPE "userlib"


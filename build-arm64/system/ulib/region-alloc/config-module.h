#pragma once
#define MODULE_LIBS ""
#define MODULE_STATIC_LIBS "system/ulib/fbl_system/ulib/zxcpp"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/fbl/include_-Isystem/ulib/region-alloc/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/region-alloc/region-alloc-c-api.cpp_system/ulib/region-alloc/region-alloc.cpp"
#define MODULE_HEADER_DEPS "system/ulib/fbl_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"


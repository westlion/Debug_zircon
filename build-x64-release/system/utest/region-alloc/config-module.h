#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fdio_system/ulib/unittest"
#define MODULE_STATIC_LIBS "system/ulib/region-alloc_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/region-alloc/gen/include_-I./build-x64-release/system/ulib/unittest/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/region-alloc/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/region-alloc/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/region-alloc/gen-hdr.stamp_./build-x64-release/system/ulib/unittest/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/region-alloc/main.c_system/utest/region-alloc/region-alloc-c-api.c_system/utest/region-alloc/region-alloc.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/region-alloc_system/ulib/unittest_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"


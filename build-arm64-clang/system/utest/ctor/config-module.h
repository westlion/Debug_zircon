#pragma once
#define MODULE_LIBS "system/ulib/unittest_system/ulib/fdio_system/ulib/c_system/utest/ctor/dso-ctor"
#define MODULE_STATIC_LIBS "system/ulib/zxcpp"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fdio/gen/include_-I./build-arm64-clang/system/ulib/unittest/gen/include_-I./build-arm64-clang/system/ulib/zxcpp/gen/include_-I./build-arm64-clang/system/utest/ctor/dso-ctor/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/ctor/dso-ctor/include_-Isystem/utest/ctor/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fdio/gen-hdr.stamp_./build-arm64-clang/system/ulib/unittest/gen-hdr.stamp_./build-arm64-clang/system/ulib/zxcpp/gen-hdr.stamp_./build-arm64-clang/system/utest/ctor/dso-ctor/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/ctor/ctor.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/unittest_system/ulib/zxcpp_system/utest/ctor/dso-ctor"
#define MODULE_TYPE "usertest"


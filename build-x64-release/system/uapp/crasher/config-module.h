#pragma once
#define MODULE_LIBS "system/ulib/fdio_system/ulib/c_system/ulib/zircon"
#define MODULE_STATIC_LIBS "system/ulib/zxcpp"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/uapp/crasher/include_-Isystem/ulib/c/include_-Isystem/ulib/fdio/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include_-fstack-protector-all"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/crasher/cpp_specific.cpp_system/uapp/crasher/crasher.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fdio_system/ulib/zircon_system/ulib/zxcpp"
#define MODULE_TYPE "userapp"


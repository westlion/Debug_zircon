#pragma once
#define MODULE_LIBS "system/ulib/unittest_system/ulib/fdio_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/fdio/gen/include_-I./build-arm64/system/ulib/unittest/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/unittest/include_-Isystem/utest/int-types/include_-Ithird_party/ulib/musl/include_-Wno-type-limits"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/fdio/gen-hdr.stamp_./build-arm64/system/ulib/unittest/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/int-types/int-types.c_system/utest/int-types/int-types.cpp_system/utest/int-types/wchar-type.c_system/utest/int-types/wchar-type.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/unittest"
#define MODULE_TYPE "usertest"


#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fdio_system/ulib/unittest_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/fbl_system/ulib/fidl_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/fidl/gen/include_-I./build-x64-release/system/ulib/unittest/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zx/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fidl/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/fidl/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/fidl/gen-hdr.stamp_./build-x64-release/system/ulib/unittest/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zx/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/fidl/abi_tests.cpp_system/utest/fidl/cpp_types_tests.cpp_system/utest/fidl/decoding_tests.cpp_system/utest/fidl/encoding_tests.cpp_system/utest/fidl/fidl_coded_types.cpp_system/utest/fidl/formatting_tests.cpp_system/utest/fidl/main.c_system/utest/fidl/message_tests.cpp_system/utest/fidl/validating_tests.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/fidl_system/ulib/unittest_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"


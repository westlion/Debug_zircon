#pragma once
#define MODULE_LIBS "system/ulib/test-utils_system/ulib/unittest_system/ulib/launchpad_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/runtime_system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/launchpad/gen/include_-I./build-arm64/system/ulib/runtime/gen/include_-I./build-arm64/system/ulib/test-utils/gen/include_-I./build-arm64/system/ulib/unittest/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/launchpad/include_-Isystem/ulib/runtime/include_-Isystem/ulib/test-utils/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/utest/debugger/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/launchpad/gen-hdr.stamp_./build-arm64/system/ulib/runtime/gen-hdr.stamp_./build-arm64/system/ulib/test-utils/gen-hdr.stamp_./build-arm64/system/ulib/unittest/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/debugger/debugger.cpp_system/utest/debugger/utils.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/launchpad_system/ulib/runtime_system/ulib/test-utils_system/ulib/unittest_system/ulib/zircon"
#define MODULE_TYPE "usertest"


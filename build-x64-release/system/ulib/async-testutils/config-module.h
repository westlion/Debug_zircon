#pragma once
#define MODULE_LIBS "system/ulib/async.default_system/ulib/c_system/ulib/zircon_system/ulib/fdio_"
#define MODULE_STATIC_LIBS "system/ulib/async.cpp_system/ulib/async_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/async.cpp/gen/include_-I./build-x64-release/system/ulib/async.default/gen/include_-I./build-x64-release/system/ulib/async/gen/include_-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zx/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/async-testutils/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async.default/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/async.cpp/gen-hdr.stamp_./build-x64-release/system/ulib/async.default/gen-hdr.stamp_./build-x64-release/system/ulib/async/gen-hdr.stamp_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zx/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/async-testutils/async_stub.cpp_system/ulib/async-testutils/test_loop.cpp_system/ulib/async-testutils/test_loop_dispatcher.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async.cpp_system/ulib/async.default_system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"


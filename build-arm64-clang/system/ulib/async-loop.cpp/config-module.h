#pragma once
#define MODULE_LIBS "system/ulib/async.default_system/ulib/c_system/ulib/zircon"
#define MODULE_STATIC_LIBS "system/ulib/async.cpp_system/ulib/async_system/ulib/async-loop_system/ulib/fbl_system/ulib/zx"
#define MODULE_COMPILEFLAGS "-I./build-arm64-clang/system/ulib/async-loop/gen/include_-I./build-arm64-clang/system/ulib/async.cpp/gen/include_-I./build-arm64-clang/system/ulib/async.default/gen/include_-I./build-arm64-clang/system/ulib/async/gen/include_-I./build-arm64-clang/system/ulib/c/gen/include_-I./build-arm64-clang/system/ulib/fbl/gen/include_-I./build-arm64-clang/system/ulib/zircon/gen/include_-I./build-arm64-clang/system/ulib/zx/gen/include_-Iglobal/include_-Isystem/ulib/async-loop/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async.default/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-clang/config-user.h_./build-arm64-clang/system/ulib/async-loop/gen-hdr.stamp_./build-arm64-clang/system/ulib/async.cpp/gen-hdr.stamp_./build-arm64-clang/system/ulib/async.default/gen-hdr.stamp_./build-arm64-clang/system/ulib/async/gen-hdr.stamp_./build-arm64-clang/system/ulib/c/gen-hdr.stamp_./build-arm64-clang/system/ulib/fbl/gen-hdr.stamp_./build-arm64-clang/system/ulib/zircon/gen-hdr.stamp_./build-arm64-clang/system/ulib/zx/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/async-loop/loop_wrapper.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async-loop_system/ulib/async.cpp_system/ulib/async.default_system/ulib/c_system/ulib/fbl_system/ulib/zircon_system/ulib/zx"
#define MODULE_TYPE "userlib"


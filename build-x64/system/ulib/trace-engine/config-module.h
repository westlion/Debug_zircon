#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/zircon"
#define MODULE_STATIC_LIBS "system/ulib/async.cpp_system/ulib/async_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/async.cpp/gen/include_-I./build-x64/system/ulib/async/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/trace-engine/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/async.cpp/gen-hdr.stamp_./build-x64/system/ulib/async/gen-hdr.stamp_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/trace-engine/context.cpp_system/ulib/trace-engine/engine.cpp_system/ulib/trace-engine/nonce.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async.cpp_system/ulib/c_system/ulib/fbl_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"


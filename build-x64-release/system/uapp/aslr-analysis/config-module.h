#pragma once
#define MODULE_LIBS "system/ulib/launchpad_system/ulib/zircon_system/ulib/c_system/ulib/fdio_"
#define MODULE_STATIC_LIBS "system/ulib/zxcpp_system/ulib/fbl_system/ulib/runtime"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/launchpad/gen/include_-I./build-x64-release/system/ulib/runtime/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/uapp/aslr-analysis/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/launchpad/include_-Isystem/ulib/runtime/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/launchpad/gen-hdr.stamp_./build-x64-release/system/ulib/runtime/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/aslr-analysis/main.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/launchpad_system/ulib/runtime_system/ulib/zircon_system/ulib/zxcpp"
#define MODULE_TYPE "userapp"


#pragma once
#define MODULE_LIBS "third_party/ulib/backtrace_third_party/ulib/ngunwind_system/ulib/zircon_system/ulib/c_"
#define MODULE_STATIC_LIBS "system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-I./build-arm64/system/ulib/zxcpp/gen/include_-I./build-arm64/third_party/ulib/backtrace/gen/include_-I./build-arm64/third_party/ulib/ngunwind/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/inspector/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/backtrace/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/ngunwind/include_-fno-omit-frame-pointer_-mno-omit-leaf-frame-pointer"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp_./build-arm64/system/ulib/zxcpp/gen-hdr.stamp_./build-arm64/third_party/ulib/backtrace/gen-hdr.stamp_./build-arm64/third_party/ulib/ngunwind/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/inspector/backtrace.cpp_system/ulib/inspector/dso-list.cpp_system/ulib/inspector/registers.cpp_system/ulib/inspector/utils.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/zircon_system/ulib/zxcpp_third_party/ulib/backtrace_third_party/ulib/ngunwind"
#define MODULE_TYPE "userlib"


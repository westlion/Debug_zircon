#pragma once
#define MODULE_LIBS "system/ulib/zx"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/zx/gen/include_-Iglobal/include_-Isystem/ulib/fzl/include_-Isystem/ulib/zx/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/zx/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/fzl/time.cpp"
#define MODULE_HEADER_DEPS "system/ulib/zx"
#define MODULE_TYPE "userlib"

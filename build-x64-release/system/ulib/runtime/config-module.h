#pragma once
#define MODULE_LIBS "_system/ulib/zircon"
#define MODULE_STATIC_LIBS ""
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/ulib/c/include_-Isystem/ulib/runtime/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/runtime/message.c_system/ulib/runtime/mutex.c_system/ulib/runtime/processargs.c_system/ulib/runtime/thread.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/zircon"
#define MODULE_TYPE "userlib"


#pragma once
#define MODULE_LIBS ""
#define MODULE_STATIC_LIBS "system/ulib/zx_system/ulib/fdio_system/ulib/fbl"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/zx/gen/include_-Iglobal/include_-Isystem/ulib/audio-utils/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/zx/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/zx/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/audio-utils/audio-device-stream.cpp_system/ulib/audio-utils/audio-input.cpp_system/ulib/audio-utils/audio-output.cpp"
#define MODULE_HEADER_DEPS "system/ulib/fbl_system/ulib/fdio_system/ulib/zx"
#define MODULE_TYPE "userlib"


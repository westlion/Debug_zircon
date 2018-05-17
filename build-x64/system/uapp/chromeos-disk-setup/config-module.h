#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/zircon_system/ulib/fdio_system/ulib/fs-management"
#define MODULE_STATIC_LIBS "system/ulib/chromeos-disk-setup_system/ulib/gpt_third_party/ulib/cksum"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/chromeos-disk-setup/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/fs-management/gen/include_-I./build-x64/system/ulib/gpt/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/third_party/ulib/cksum/gen/include_-Iglobal/include_-Isystem/uapp/chromeos-disk-setup/include_-Isystem/ulib/c/include_-Isystem/ulib/chromeos-disk-setup/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/gpt/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/cksum/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/chromeos-disk-setup/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/fs-management/gen-hdr.stamp_./build-x64/system/ulib/gpt/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/third_party/ulib/cksum/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/uapp/chromeos-disk-setup/chromeos-disk-setup.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/chromeos-disk-setup_system/ulib/fdio_system/ulib/fs-management_system/ulib/gpt_system/ulib/zircon_third_party/ulib/cksum"
#define MODULE_TYPE "userapp"


#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/c_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/pretty_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/ddk/gen/include_-I./build-x64-release/system/ulib/driver/gen/include_-I./build-x64-release/system/ulib/pretty/gen/include_-I./build-x64-release/system/ulib/sync/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/third_party/ulib/usb-dwc-regs/gen/include_-Iglobal/include_-Isystem/dev/usb/dwc2/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/pretty/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/usb-dwc-regs/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/ddk/gen-hdr.stamp_./build-x64-release/system/ulib/driver/gen-hdr.stamp_./build-x64-release/system/ulib/pretty/gen-hdr.stamp_./build-x64-release/system/ulib/sync/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/usb/dwc2/dwc2.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/pretty_system/ulib/sync_system/ulib/zircon_third_party/ulib/usb-dwc-regs"
#define MODULE_TYPE "driver"


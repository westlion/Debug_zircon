#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/c_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/dev/gpio/pl061_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/dev/gpio/pl061/gen/include_-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/ddk/gen/include_-I./build-arm64/system/ulib/driver/gen/include_-I./build-arm64/system/ulib/sync/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/gpio/pl061/include_-Isystem/dev/soc/hi3660/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/dev/gpio/pl061/gen-hdr.stamp_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/ddk/gen-hdr.stamp_./build-arm64/system/ulib/driver/gen-hdr.stamp_./build-arm64/system/ulib/sync/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/soc/hi3660/hi3660-dsi.c_system/dev/soc/hi3660/hi3660-gpios.c_system/dev/soc/hi3660/hi3660-i2c.c_system/dev/soc/hi3660/hi3660-usb.c_system/dev/soc/hi3660/hi3660.c"
#define MODULE_HEADER_DEPS "system/dev/gpio/pl061_system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "userlib"


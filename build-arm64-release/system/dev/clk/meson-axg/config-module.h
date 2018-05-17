#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/c_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/dev/clk/meson-lib_system/ulib/ddk_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/dev/clk/meson-lib/gen/include_-I./build-arm64-release/system/dev/soc/amlogic/gen/include_-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/ddk/gen/include_-I./build-arm64-release/system/ulib/driver/gen/include_-I./build-arm64-release/system/ulib/sync/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/clk/meson-axg/include_-Isystem/dev/clk/meson-lib/include_-Isystem/dev/soc/amlogic/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/dev/clk/meson-lib/gen-hdr.stamp_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/ddk/gen-hdr.stamp_./build-arm64-release/system/ulib/driver/gen-hdr.stamp_./build-arm64-release/system/ulib/sync/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/clk/meson-axg/meson-axg-clk.c"
#define MODULE_HEADER_DEPS "system/dev/clk/meson-lib_system/dev/soc/amlogic_system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "driver"


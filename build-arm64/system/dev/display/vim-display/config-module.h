#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/sync"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/ddk/gen/include_-I./build-arm64/system/ulib/driver/gen/include_-I./build-arm64/system/ulib/sync/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/display/vim-display/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/ddk/gen-hdr.stamp_./build-arm64/system/ulib/driver/gen-hdr.stamp_./build-arm64/system/ulib/sync/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/display/vim-display/canvas.c_system/dev/display/vim-display/edid.c_system/dev/display/vim-display/hdmitx.c_system/dev/display/vim-display/hdmitx_clk.c_system/dev/display/vim-display/osd2.c_system/dev/display/vim-display/vim-display.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "driver"


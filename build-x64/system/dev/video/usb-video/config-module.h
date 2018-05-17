#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/zircon_system/ulib/c_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/ddktl_system/ulib/dispatcher-pool_system/ulib/fbl_system/ulib/sync_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/ddktl/gen/include_-I./build-x64/system/ulib/dispatcher-pool/gen/include_-I./build-x64/system/ulib/driver/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/sync/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/dev/video/usb-video/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/ddktl/include_-Isystem/ulib/dispatcher-pool/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/ddktl/gen-hdr.stamp_./build-x64/system/ulib/dispatcher-pool/gen-hdr.stamp_./build-x64/system/ulib/driver/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/sync/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/video/usb-video/binding.c_system/dev/video/usb-video/usb-video-stream.cpp_system/dev/video/usb-video/usb-video.cpp_system/dev/video/usb-video/video-buffer.cpp_system/dev/video/usb-video/video-util.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/ddktl_system/ulib/dispatcher-pool_system/ulib/driver_system/ulib/fbl_system/ulib/sync_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "driver"


#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/driver_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/audio-proto-utils_system/ulib/audio-driver-proto_system/ulib/ddk_system/ulib/ddktl_system/ulib/dispatcher-pool_system/ulib/fbl_system/ulib/sync_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/audio-driver-proto/gen/include_-I./build-x64/system/ulib/audio-proto-utils/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/ddktl/gen/include_-I./build-x64/system/ulib/dispatcher-pool/gen/include_-I./build-x64/system/ulib/driver/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/sync/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zx/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/dev/audio/gauss-pdm-input/include_-Isystem/ulib/audio-driver-proto/include_-Isystem/ulib/audio-proto-utils/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/ddktl/include_-Isystem/ulib/dispatcher-pool/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/audio-driver-proto/gen-hdr.stamp_./build-x64/system/ulib/audio-proto-utils/gen-hdr.stamp_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/ddktl/gen-hdr.stamp_./build-x64/system/ulib/dispatcher-pool/gen-hdr.stamp_./build-x64/system/ulib/driver/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/sync/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zx/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/audio/gauss-pdm-input/a113-audio-device.c_system/dev/audio/gauss-pdm-input/a113-ddr.c_system/dev/audio/gauss-pdm-input/a113-pdm.c_system/dev/audio/gauss-pdm-input/gauss-pdm-input-stream.cpp_system/dev/audio/gauss-pdm-input/gauss-pdm-input.c_system/dev/audio/gauss-pdm-input/vmo_helper.cpp"
#define MODULE_HEADER_DEPS "system/ulib/audio-driver-proto_system/ulib/audio-proto-utils_system/ulib/c_system/ulib/ddk_system/ulib/ddktl_system/ulib/dispatcher-pool_system/ulib/driver_system/ulib/fbl_system/ulib/sync_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "driver"


#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/zircon_system/ulib/c_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/intel-hda_system/ulib/audio-driver-proto_system/ulib/audio-proto-utils_system/ulib/dispatcher-pool_system/ulib/fbl_system/ulib/zx_system/ulib/zxcpp_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/audio-driver-proto/gen/include_-I./build-arm64-release/system/ulib/audio-proto-utils/gen/include_-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/ddk/gen/include_-I./build-arm64-release/system/ulib/dispatcher-pool/gen/include_-I./build-arm64-release/system/ulib/driver/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/intel-hda/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-I./build-arm64-release/system/ulib/zx/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/dev/audio/intel-hda/codecs/qemu/include_-Isystem/ulib/audio-driver-proto/include_-Isystem/ulib/audio-proto-utils/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/dispatcher-pool/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/intel-hda/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/audio-driver-proto/gen-hdr.stamp_./build-arm64-release/system/ulib/audio-proto-utils/gen-hdr.stamp_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/ddk/gen-hdr.stamp_./build-arm64-release/system/ulib/dispatcher-pool/gen-hdr.stamp_./build-arm64-release/system/ulib/driver/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/intel-hda/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp_./build-arm64-release/system/ulib/zx/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/audio/intel-hda/codecs/qemu/binding.c_system/dev/audio/intel-hda/codecs/qemu/qemu-codec.cpp_system/dev/audio/intel-hda/codecs/qemu/qemu-stream.cpp"
#define MODULE_HEADER_DEPS "system/ulib/audio-driver-proto_system/ulib/audio-proto-utils_system/ulib/c_system/ulib/ddk_system/ulib/dispatcher-pool_system/ulib/driver_system/ulib/fbl_system/ulib/intel-hda_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "driver"


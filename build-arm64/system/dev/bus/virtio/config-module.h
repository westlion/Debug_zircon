#pragma once
#define MODULE_LIBS "system/ulib/driver_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/pretty_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_system/ulib/virtio_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-arm64/system/ulib/c/gen/include_-I./build-arm64/system/ulib/ddk/gen/include_-I./build-arm64/system/ulib/driver/gen/include_-I./build-arm64/system/ulib/fbl/gen/include_-I./build-arm64/system/ulib/pretty/gen/include_-I./build-arm64/system/ulib/sync/gen/include_-I./build-arm64/system/ulib/virtio/gen/include_-I./build-arm64/system/ulib/zircon/gen/include_-I./build-arm64/system/ulib/zx/gen/include_-I./build-arm64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/dev/bus/virtio/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/pretty/include_-Isystem/ulib/sync/include_-Isystem/ulib/virtio/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64/config-user.h_./build-arm64/system/ulib/c/gen-hdr.stamp_./build-arm64/system/ulib/ddk/gen-hdr.stamp_./build-arm64/system/ulib/driver/gen-hdr.stamp_./build-arm64/system/ulib/fbl/gen-hdr.stamp_./build-arm64/system/ulib/pretty/gen-hdr.stamp_./build-arm64/system/ulib/sync/gen-hdr.stamp_./build-arm64/system/ulib/virtio/gen-hdr.stamp_./build-arm64/system/ulib/zircon/gen-hdr.stamp_./build-arm64/system/ulib/zx/gen-hdr.stamp_./build-arm64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/bus/virtio/backends/pci.cpp_system/dev/bus/virtio/backends/pci_legacy.cpp_system/dev/bus/virtio/backends/pci_modern.cpp_system/dev/bus/virtio/block.cpp_system/dev/bus/virtio/console.cpp_system/dev/bus/virtio/device.cpp_system/dev/bus/virtio/ethernet.cpp_system/dev/bus/virtio/gpu.cpp_system/dev/bus/virtio/input.cpp_system/dev/bus/virtio/ring.cpp_system/dev/bus/virtio/rng.cpp_system/dev/bus/virtio/virtio_c.c_system/dev/bus/virtio/virtio_driver.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/fbl_system/ulib/pretty_system/ulib/sync_system/ulib/virtio_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "driver"


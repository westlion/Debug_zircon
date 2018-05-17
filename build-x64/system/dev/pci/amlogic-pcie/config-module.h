#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/driver_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/ddk_system/ulib/fbl_system/ulib/hwreg_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/dev/soc/amlogic/gen/include_-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/ddk/gen/include_-I./build-x64/system/ulib/driver/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/hwreg/gen/include_-I./build-x64/system/ulib/sync/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-Iglobal/include_-Isystem/dev/pci/amlogic-pcie/include_-Isystem/dev/soc/amlogic/include_-Isystem/ulib/c/include_-Isystem/ulib/ddk/include_-Isystem/ulib/driver/include_-Isystem/ulib/fbl/include_-Isystem/ulib/hwreg/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/ddk/gen-hdr.stamp_./build-x64/system/ulib/driver/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/hwreg/gen-hdr.stamp_./build-x64/system/ulib/sync/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/dev/pci/amlogic-pcie/aml-pcie-clk.cpp_system/dev/pci/amlogic-pcie/aml-pcie.c"
#define MODULE_HEADER_DEPS "system/dev/soc/amlogic_system/ulib/c_system/ulib/ddk_system/ulib/driver_system/ulib/fbl_system/ulib/hwreg_system/ulib/sync_system/ulib/zircon"
#define MODULE_TYPE "driver"


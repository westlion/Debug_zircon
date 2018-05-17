#pragma once
#define BUILD_FOR_TEST 1
#define MODULE_LIBS "system/ulib/unittest_system/ulib/fdio_system/ulib/zircon_system/ulib/c"
#define MODULE_STATIC_LIBS "system/ulib/gfx_system/ulib/hid_system/ulib/port_system/ulib/zxcpp_system/ulib/fbl_"
#define MODULE_COMPILEFLAGS "-I./build-x64/system/ulib/c/gen/include_-I./build-x64/system/ulib/fbl/gen/include_-I./build-x64/system/ulib/fdio/gen/include_-I./build-x64/system/ulib/gfx/gen/include_-I./build-x64/system/ulib/hid/gen/include_-I./build-x64/system/ulib/port/gen/include_-I./build-x64/system/ulib/unittest/gen/include_-I./build-x64/system/ulib/zircon/gen/include_-I./build-x64/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/core/virtcon/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/gfx/include_-Isystem/ulib/hid/include_-Isystem/ulib/port/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-x64/config-user.h_./build-x64/system/ulib/c/gen-hdr.stamp_./build-x64/system/ulib/fbl/gen-hdr.stamp_./build-x64/system/ulib/fdio/gen-hdr.stamp_./build-x64/system/ulib/gfx/gen-hdr.stamp_./build-x64/system/ulib/hid/gen-hdr.stamp_./build-x64/system/ulib/port/gen-hdr.stamp_./build-x64/system/ulib/unittest/gen-hdr.stamp_./build-x64/system/ulib/zircon/gen-hdr.stamp_./build-x64/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/core/virtcon/keyboard-test.cpp_system/core/virtcon/keyboard-vt100.cpp_system/core/virtcon/keyboard.cpp_system/core/virtcon/textcon-test.cpp_system/core/virtcon/textcon.cpp_system/core/virtcon/vc-device.cpp_system/core/virtcon/vc-gfx.cpp_system/core/virtcon/vc-input.cpp"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/gfx_system/ulib/hid_system/ulib/port_system/ulib/unittest_system/ulib/zircon_system/ulib/zxcpp"
#define MODULE_TYPE "usertest"


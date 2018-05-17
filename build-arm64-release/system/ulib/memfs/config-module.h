#pragma once
#define MODULE_LIBS "system/ulib/async.default_system/ulib/c_system/ulib/fdio_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/fs_system/ulib/async.cpp_system/ulib/async_system/ulib/async-loop.cpp_system/ulib/async-loop_system/ulib/zx_system/ulib/zxcpp_system/ulib/fbl_system/ulib/sync_"
#define MODULE_COMPILEFLAGS "-I./build-arm64-release/system/ulib/async-loop.cpp/gen/include_-I./build-arm64-release/system/ulib/async-loop/gen/include_-I./build-arm64-release/system/ulib/async.cpp/gen/include_-I./build-arm64-release/system/ulib/async.default/gen/include_-I./build-arm64-release/system/ulib/async/gen/include_-I./build-arm64-release/system/ulib/c/gen/include_-I./build-arm64-release/system/ulib/fbl/gen/include_-I./build-arm64-release/system/ulib/fdio/gen/include_-I./build-arm64-release/system/ulib/fs/gen/include_-I./build-arm64-release/system/ulib/sync/gen/include_-I./build-arm64-release/system/ulib/zircon/gen/include_-I./build-arm64-release/system/ulib/zx/gen/include_-I./build-arm64-release/system/ulib/zxcpp/gen/include_-Iglobal/include_-Isystem/ulib/async-loop.cpp/include_-Isystem/ulib/async-loop/include_-Isystem/ulib/async.cpp/include_-Isystem/ulib/async.default/include_-Isystem/ulib/async/include_-Isystem/ulib/c/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs/include_-Isystem/ulib/memfs/include_-Isystem/ulib/sync/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Ithird_party/ulib/musl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS ""
#define MODULE_SRCDEPS "./build-arm64-release/config-user.h_./build-arm64-release/system/ulib/async-loop.cpp/gen-hdr.stamp_./build-arm64-release/system/ulib/async-loop/gen-hdr.stamp_./build-arm64-release/system/ulib/async.cpp/gen-hdr.stamp_./build-arm64-release/system/ulib/async.default/gen-hdr.stamp_./build-arm64-release/system/ulib/async/gen-hdr.stamp_./build-arm64-release/system/ulib/c/gen-hdr.stamp_./build-arm64-release/system/ulib/fbl/gen-hdr.stamp_./build-arm64-release/system/ulib/fdio/gen-hdr.stamp_./build-arm64-release/system/ulib/fs/gen-hdr.stamp_./build-arm64-release/system/ulib/sync/gen-hdr.stamp_./build-arm64-release/system/ulib/zircon/gen-hdr.stamp_./build-arm64-release/system/ulib/zx/gen-hdr.stamp_./build-arm64-release/system/ulib/zxcpp/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/ulib/memfs/directory.cpp_system/ulib/memfs/dnode.cpp_system/ulib/memfs/file.cpp_system/ulib/memfs/memfs.cpp_system/ulib/memfs/vmo.cpp"
#define MODULE_HEADER_DEPS "system/ulib/async_system/ulib/async-loop_system/ulib/async-loop.cpp_system/ulib/async.cpp_system/ulib/async.default_system/ulib/c_system/ulib/fbl_system/ulib/fdio_system/ulib/fs_system/ulib/sync_system/ulib/zircon_system/ulib/zx_system/ulib/zxcpp"
#define MODULE_TYPE "userlib"


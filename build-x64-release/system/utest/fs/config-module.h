#pragma once
#define MODULE_LIBS "system/ulib/c_system/ulib/fdio_system/ulib/fs-management_system/ulib/launchpad_system/ulib/trace-engine_system/ulib/unittest_system/ulib/zircon_"
#define MODULE_STATIC_LIBS "system/ulib/fvm_system/ulib/fs_system/ulib/gpt_system/ulib/digest_system/ulib/trace_system/ulib/zxcpp_system/ulib/fbl_third_party/ulib/uboringssl_"
#define MODULE_COMPILEFLAGS "-I./build-x64-release/system/ulib/c/gen/include_-I./build-x64-release/system/ulib/digest/gen/include_-I./build-x64-release/system/ulib/fbl/gen/include_-I./build-x64-release/system/ulib/fdio/gen/include_-I./build-x64-release/system/ulib/fs-management/gen/include_-I./build-x64-release/system/ulib/fs/gen/include_-I./build-x64-release/system/ulib/fvm/gen/include_-I./build-x64-release/system/ulib/gpt/gen/include_-I./build-x64-release/system/ulib/launchpad/gen/include_-I./build-x64-release/system/ulib/trace-engine/gen/include_-I./build-x64-release/system/ulib/trace/gen/include_-I./build-x64-release/system/ulib/unittest/gen/include_-I./build-x64-release/system/ulib/zircon/gen/include_-I./build-x64-release/system/ulib/zxcpp/gen/include_-I./build-x64-release/third_party/ulib/uboringssl/gen/include_-Iglobal/include_-Isystem/ulib/bitmap/include_-Isystem/ulib/block-client/include_-Isystem/ulib/c/include_-Isystem/ulib/digest/include_-Isystem/ulib/fbl/include_-Isystem/ulib/fdio/include_-Isystem/ulib/fs-management/include_-Isystem/ulib/fs/include_-Isystem/ulib/fvm/include_-Isystem/ulib/gpt/include_-Isystem/ulib/launchpad/include_-Isystem/ulib/minfs/include_-Isystem/ulib/trace-engine/include_-Isystem/ulib/trace/include_-Isystem/ulib/unittest/include_-Isystem/ulib/zircon/include_-Isystem/ulib/zx/include_-Isystem/ulib/zxcpp/include_-Isystem/utest/fs/include_-Ithird_party/ulib/musl/include_-Ithird_party/ulib/uboringssl/include"
#define MODULE_CFLAGS ""
#define MODULE_CPPFLAGS ""
#define MODULE_ASMFLAGS ""
#define MODULE_OPTFLAGS ""
#define MODULE_LDFLAGS "--wrap_chdir_link_mkdir_open_opendir_realpath_remove_rename_renameat_rmdir_stat_symlink_truncate_unlink_utimes"
#define MODULE_SRCDEPS "./build-x64-release/config-user.h_./build-x64-release/system/ulib/c/gen-hdr.stamp_./build-x64-release/system/ulib/digest/gen-hdr.stamp_./build-x64-release/system/ulib/fbl/gen-hdr.stamp_./build-x64-release/system/ulib/fdio/gen-hdr.stamp_./build-x64-release/system/ulib/fs-management/gen-hdr.stamp_./build-x64-release/system/ulib/fs/gen-hdr.stamp_./build-x64-release/system/ulib/fvm/gen-hdr.stamp_./build-x64-release/system/ulib/gpt/gen-hdr.stamp_./build-x64-release/system/ulib/launchpad/gen-hdr.stamp_./build-x64-release/system/ulib/trace-engine/gen-hdr.stamp_./build-x64-release/system/ulib/trace/gen-hdr.stamp_./build-x64-release/system/ulib/unittest/gen-hdr.stamp_./build-x64-release/system/ulib/zircon/gen-hdr.stamp_./build-x64-release/system/ulib/zxcpp/gen-hdr.stamp_./build-x64-release/third_party/ulib/uboringssl/gen-hdr.stamp"
#define MODULE_DEPS ""
#define MODULE_SRCS "system/utest/fs/filesystems.cpp_system/utest/fs/main.c_system/utest/fs/misc.c_system/utest/fs/test-access.cpp_system/utest/fs/test-append.cpp_system/utest/fs/test-attr.c_system/utest/fs/test-basic.c_system/utest/fs/test-clone.cpp_system/utest/fs/test-directory.cpp_system/utest/fs/test-dot-dot.c_system/utest/fs/test-fcntl.cpp_system/utest/fs/test-link.c_system/utest/fs/test-maxfile.cpp_system/utest/fs/test-minfs.cpp_system/utest/fs/test-mmap.cpp_system/utest/fs/test-overflow.c_system/utest/fs/test-persist.cpp_system/utest/fs/test-random-op.c_system/utest/fs/test-realpath.cpp_system/utest/fs/test-rename.c_system/utest/fs/test-resize.cpp_system/utest/fs/test-rw-workers.c_system/utest/fs/test-sparse.cpp_system/utest/fs/test-sync.c_system/utest/fs/test-threading.cpp_system/utest/fs/test-truncate.cpp_system/utest/fs/test-unlink.cpp_system/utest/fs/test-utils.cpp_system/utest/fs/test-vmo.cpp_system/utest/fs/test-watcher.cpp_system/utest/fs/wrap.c"
#define MODULE_HEADER_DEPS "system/ulib/c_system/ulib/digest_system/ulib/fbl_system/ulib/fdio_system/ulib/fs_system/ulib/fs-management_system/ulib/fvm_system/ulib/gpt_system/ulib/launchpad_system/ulib/trace_system/ulib/trace-engine_system/ulib/unittest_system/ulib/zircon_system/ulib/zxcpp_third_party/ulib/uboringssl"
#define MODULE_TYPE "usertest"


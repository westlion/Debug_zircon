#define USERBOOT_FILENAME "./build-x64/system/core/userboot/libuserboot.so"
#define USERBOOT_CODE_START 0x3000
#define USERBOOT_CODE_END (((USERBOOT_CODE_START + 0xb000 + (1 << PAGE_SIZE_SHIFT) - 1) >> PAGE_SIZE_SHIFT) << PAGE_SIZE_SHIFT)
#define USERBOOT_ENTRY 0x0000000000003b50
#define USERBOOT_ENTRY_SIZE 0x0000000000000ae1

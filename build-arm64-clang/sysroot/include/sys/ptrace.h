#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define PTRACE_TRACEME 0
#define PT_TRACE_ME PTRACE_TRACEME

#define PTRACE_PEEKTEXT 1
#define PTRACE_PEEKDATA 2
#define PTRACE_PEEKUSER 3
#define PTRACE_POKETEXT 4
#define PTRACE_POKEDATA 5
#define PTRACE_POKEUSER 6
#define PTRACE_CONT 7
#define PTRACE_KILL 8
#define PTRACE_SINGLESTEP 9
#define PTRACE_GETREGS 12
#define PTRACE_SETREGS 13
#define PTRACE_GETFPREGS 14
#define PTRACE_SETFPREGS 15
#define PTRACE_ATTACH 16
#define PTRACE_DETACH 17
#define PTRACE_GETFPXREGS 18
#define PTRACE_SETFPXREGS 19
#define PTRACE_SYSCALL 24
#define PTRACE_SETOPTIONS 0x4200
#define PTRACE_GETEVENTMSG 0x4201
#define PTRACE_GETSIGINFO 0x4202
#define PTRACE_SETSIGINFO 0x4203
#define PTRACE_GETREGSET 0x4204
#define PTRACE_SETREGSET 0x4205
#define PTRACE_SEIZE 0x4206
#define PTRACE_INTERRUPT 0x4207
#define PTRACE_LISTEN 0x4208
#define PTRACE_PEEKSIGINFO 0x4209
#define PTRACE_GETSIGMASK 0x420a
#define PTRACE_SETSIGMASK 0x420b
#define PTRACE_SECCOMP_GET_FILTER 0x420c

#define PT_READ_I PTRACE_PEEKTEXT
#define PT_READ_D PTRACE_PEEKDATA
#define PT_READ_U PTRACE_PEEKUSER
#define PT_WRITE_I PTRACE_POKETEXT
#define PT_WRITE_D PTRACE_POKEDATA
#define PT_WRITE_U PTRACE_POKEUSER
#define PT_CONTINUE PTRACE_CONT
#define PT_KILL PTRACE_KILL
#define PT_STEP PTRACE_SINGLESTEP
#define PT_GETREGS PTRACE_GETREGS
#define PT_SETREGS PTRACE_SETREGS
#define PT_GETFPREGS PTRACE_GETFPREGS
#define PT_SETFPREGS PTRACE_SETFPREGS
#define PT_ATTACH PTRACE_ATTACH
#define PT_DETACH PTRACE_DETACH
#define PT_GETFPXREGS PTRACE_GETFPXREGS
#define PT_SETFPXREGS PTRACE_SETFPXREGS
#define PT_SYSCALL PTRACE_SYSCALL
#define PT_SETOPTIONS PTRACE_SETOPTIONS
#define PT_GETEVENTMSG PTRACE_GETEVENTMSG
#define PT_GETSIGINFO PTRACE_GETSIGINFO
#define PT_SETSIGINFO PTRACE_SETSIGINFO

#define PTRACE_O_TRACESYSGOOD 0x00000001
#define PTRACE_O_TRACEFORK 0x00000002
#define PTRACE_O_TRACEVFORK 0x00000004
#define PTRACE_O_TRACECLONE 0x00000008
#define PTRACE_O_TRACEEXEC 0x00000010
#define PTRACE_O_TRACEVFORKDONE 0x00000020
#define PTRACE_O_TRACEEXIT 0x00000040
#define PTRACE_O_TRACESECCOMP 0x00000080
#define PTRACE_O_EXITKILL 0x00100000
#define PTRACE_O_SUSPEND_SECCOMP 0x00200000
#define PTRACE_O_MASK 0x003000ff

#define PTRACE_EVENT_FORK 1
#define PTRACE_EVENT_VFORK 2
#define PTRACE_EVENT_CLONE 3
#define PTRACE_EVENT_EXEC 4
#define PTRACE_EVENT_VFORK_DONE 5
#define PTRACE_EVENT_EXIT 6
#define PTRACE_EVENT_SECCOMP 7

#define PTRACE_PEEKSIGINFO_SHARED 1

struct ptrace_peeksiginfo_args {
    uint64_t off;
    uint32_t flags;
    int32_t nr;
};

long ptrace(int, ...);

#ifdef __cplusplus
}
#endif

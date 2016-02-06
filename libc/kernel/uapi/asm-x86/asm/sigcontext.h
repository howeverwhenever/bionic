/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_ASM_X86_SIGCONTEXT_H
#define _UAPI_ASM_X86_SIGCONTEXT_H
#include <linux/compiler.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FP_XSTATE_MAGIC1 0x46505853U
#define FP_XSTATE_MAGIC2 0x46505845U
#define FP_XSTATE_MAGIC2_SIZE sizeof(FP_XSTATE_MAGIC2)
struct _fpx_sw_bytes {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 magic1;
  __u32 extended_size;
  __u64 xfeatures;
  __u32 xstate_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 padding[7];
};
struct _fpreg {
  __u16 significand[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 exponent;
};
struct _fpxreg {
  __u16 significand[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 exponent;
  __u16 padding[3];
};
struct _xmmreg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 element[4];
};
#define X86_FXSR_MAGIC 0x0000
struct _fpstate_32 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 cw;
  __u32 sw;
  __u32 tag;
  __u32 ipoff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 cssel;
  __u32 dataoff;
  __u32 datasel;
  struct _fpreg _st[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 status;
  __u16 magic;
  __u32 _fxsr_env[6];
  __u32 mxcsr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u32 padding1[44];
    __u32 padding[44];
  };
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    __u32 padding2[12];
    struct _fpx_sw_bytes sw_reserved;
  };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct _fpstate_64 {
  __u16 cwd;
  __u16 swd;
  __u16 twd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 fop;
  __u64 rip;
  __u64 rdp;
  __u32 mxcsr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 mxcsr_mask;
  __u32 st_space[32];
  __u32 xmm_space[64];
  __u32 reserved2[12];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  union {
    __u32 reserved3[12];
    struct _fpx_sw_bytes sw_reserved;
  };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#ifdef __i386__
#define _fpstate _fpstate_32
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _fpstate _fpstate_64
#endif
struct _header {
  __u64 xfeatures;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 reserved1[2];
  __u64 reserved2[5];
};
struct _ymmh_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ymmh_space[64];
};
struct _xstate {
  struct _fpstate fpstate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct _header xstate_hdr;
  struct _ymmh_state ymmh;
};
struct sigcontext_32 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 gs, __gsh;
  __u16 fs, __fsh;
  __u16 es, __esh;
  __u16 ds, __dsh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 di;
  __u32 si;
  __u32 bp;
  __u32 sp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 bx;
  __u32 dx;
  __u32 cx;
  __u32 ax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 trapno;
  __u32 err;
  __u32 ip;
  __u16 cs, __csh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 flags;
  __u32 sp_at_signal;
  __u16 ss, __ssh;
  __u32 fpstate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 oldmask;
  __u32 cr2;
};
struct sigcontext_64 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 r8;
  __u64 r9;
  __u64 r10;
  __u64 r11;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 r12;
  __u64 r13;
  __u64 r14;
  __u64 r15;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 di;
  __u64 si;
  __u64 bp;
  __u64 bx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 dx;
  __u64 ax;
  __u64 cx;
  __u64 sp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 ip;
  __u64 flags;
  __u16 cs;
  __u16 gs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 fs;
  __u16 __pad0;
  __u64 err;
  __u64 trapno;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 oldmask;
  __u64 cr2;
  __u64 fpstate;
  __u64 reserved1[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define _fpstate_ia32 _fpstate_32
#define sigcontext_ia32 sigcontext_32
#ifdef __i386__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sigcontext {
  __u16 gs, __gsh;
  __u16 fs, __fsh;
  __u16 es, __esh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 ds, __dsh;
  __u32 edi;
  __u32 esi;
  __u32 ebp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 esp;
  __u32 ebx;
  __u32 edx;
  __u32 ecx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 eax;
  __u32 trapno;
  __u32 err;
  __u32 eip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 cs, __csh;
  __u32 eflags;
  __u32 esp_at_signal;
  __u16 ss, __ssh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct _fpstate __user * fpstate;
  __u32 oldmask;
  __u32 cr2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
struct sigcontext {
  __u64 r8;
  __u64 r9;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 r10;
  __u64 r11;
  __u64 r12;
  __u64 r13;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 r14;
  __u64 r15;
  __u64 rdi;
  __u64 rsi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 rbp;
  __u64 rbx;
  __u64 rdx;
  __u64 rax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 rcx;
  __u64 rsp;
  __u64 rip;
  __u64 eflags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 cs;
  __u16 gs;
  __u16 fs;
  __u16 __pad0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 err;
  __u64 trapno;
  __u64 oldmask;
  __u64 cr2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct _fpstate __user * fpstate;
#ifdef __ILP32__
  __u32 __fpstate_pad;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 reserved1[8];
};
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

#define	NATHN_USB	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NATHN_USB
 .global _KERNEL_OPT_NATHN_USB
 .equiv _KERNEL_OPT_NATHN_USB,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NATHN_USB\n .global _KERNEL_OPT_NATHN_USB\n .equiv _KERNEL_OPT_NATHN_USB,0x1\n .endif");
#endif

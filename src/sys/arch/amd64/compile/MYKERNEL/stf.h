#define	NSTF	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSTF
 .global _KERNEL_OPT_NSTF
 .equiv _KERNEL_OPT_NSTF,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSTF\n .global _KERNEL_OPT_NSTF\n .equiv _KERNEL_OPT_NSTF,0x1\n .endif");
#endif
#define	NINET	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NINET
 .global _KERNEL_OPT_NINET
 .equiv _KERNEL_OPT_NINET,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NINET\n .global _KERNEL_OPT_NINET\n .equiv _KERNEL_OPT_NINET,0x1\n .endif");
#endif
#define	NINET6	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NINET6
 .global _KERNEL_OPT_NINET6
 .equiv _KERNEL_OPT_NINET6,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NINET6\n .global _KERNEL_OPT_NINET6\n .equiv _KERNEL_OPT_NINET6,0x1\n .endif");
#endif
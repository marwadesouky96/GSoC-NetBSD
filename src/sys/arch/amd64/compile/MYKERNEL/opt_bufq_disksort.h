#define	BUFQ_DISKSORT	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_BUFQ_DISKSORT
 .global _KERNEL_OPT_BUFQ_DISKSORT
 .equiv _KERNEL_OPT_BUFQ_DISKSORT,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_BUFQ_DISKSORT\n .global _KERNEL_OPT_BUFQ_DISKSORT\n .equiv _KERNEL_OPT_BUFQ_DISKSORT,0x1\n .endif");
#endif
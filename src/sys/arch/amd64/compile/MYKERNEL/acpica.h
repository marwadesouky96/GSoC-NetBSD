#define	NACPICA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NACPICA
 .global _KERNEL_OPT_NACPICA
 .equiv _KERNEL_OPT_NACPICA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NACPICA\n .global _KERNEL_OPT_NACPICA\n .equiv _KERNEL_OPT_NACPICA,0x1\n .endif");
#endif

#define	NVCODA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVCODA
 .global _KERNEL_OPT_NVCODA
 .equiv _KERNEL_OPT_NVCODA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVCODA\n .global _KERNEL_OPT_NVCODA\n .equiv _KERNEL_OPT_NVCODA,0x1\n .endif");
#endif

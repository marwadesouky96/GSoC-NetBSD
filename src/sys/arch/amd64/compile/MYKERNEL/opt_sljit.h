/* option `SLJIT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_SLJIT
 .global _KERNEL_OPT_SLJIT
 .equiv _KERNEL_OPT_SLJIT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_SLJIT\n .global _KERNEL_OPT_SLJIT\n .equiv _KERNEL_OPT_SLJIT,0x6e074def\n .endif");
#endif

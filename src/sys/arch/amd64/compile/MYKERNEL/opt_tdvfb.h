/* option `TDVFB_CONSOLE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_TDVFB_CONSOLE
 .global _KERNEL_OPT_TDVFB_CONSOLE
 .equiv _KERNEL_OPT_TDVFB_CONSOLE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_TDVFB_CONSOLE\n .global _KERNEL_OPT_TDVFB_CONSOLE\n .equiv _KERNEL_OPT_TDVFB_CONSOLE,0x6e074def\n .endif");
#endif

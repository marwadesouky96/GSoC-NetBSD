/* option `KSTACK_CHECK_MAGIC' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_KSTACK_CHECK_MAGIC
 .global _KERNEL_OPT_KSTACK_CHECK_MAGIC
 .equiv _KERNEL_OPT_KSTACK_CHECK_MAGIC,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_KSTACK_CHECK_MAGIC\n .global _KERNEL_OPT_KSTACK_CHECK_MAGIC\n .equiv _KERNEL_OPT_KSTACK_CHECK_MAGIC,0x6e074def\n .endif");
#endif

/* option `PUC_CNAUTO' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PUC_CNAUTO
 .global _KERNEL_OPT_PUC_CNAUTO
 .equiv _KERNEL_OPT_PUC_CNAUTO,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PUC_CNAUTO\n .global _KERNEL_OPT_PUC_CNAUTO\n .equiv _KERNEL_OPT_PUC_CNAUTO,0x6e074def\n .endif");
#endif
/* option `PUC_CNBUS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_PUC_CNBUS
 .global _KERNEL_OPT_PUC_CNBUS
 .equiv _KERNEL_OPT_PUC_CNBUS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_PUC_CNBUS\n .global _KERNEL_OPT_PUC_CNBUS\n .equiv _KERNEL_OPT_PUC_CNBUS,0x6e074def\n .endif");
#endif

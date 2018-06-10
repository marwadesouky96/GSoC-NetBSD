#define	NCOM_PUC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCOM_PUC
 .global _KERNEL_OPT_NCOM_PUC
 .equiv _KERNEL_OPT_NCOM_PUC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCOM_PUC\n .global _KERNEL_OPT_NCOM_PUC\n .equiv _KERNEL_OPT_NCOM_PUC,0x1\n .endif");
#endif

#define	NSATA_PMP	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSATA_PMP
 .global _KERNEL_OPT_NSATA_PMP
 .equiv _KERNEL_OPT_NSATA_PMP,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSATA_PMP\n .global _KERNEL_OPT_NSATA_PMP\n .equiv _KERNEL_OPT_NSATA_PMP,0x1\n .endif");
#endif

#define	NIGMAFB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NIGMAFB
 .global _KERNEL_OPT_NIGMAFB
 .equiv _KERNEL_OPT_NIGMAFB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NIGMAFB\n .global _KERNEL_OPT_NIGMAFB\n .equiv _KERNEL_OPT_NIGMAFB,0x0\n .endif");
#endif

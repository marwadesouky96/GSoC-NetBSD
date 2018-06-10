#define	NLYNXFB	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NLYNXFB
 .global _KERNEL_OPT_NLYNXFB
 .equiv _KERNEL_OPT_NLYNXFB,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NLYNXFB\n .global _KERNEL_OPT_NLYNXFB\n .equiv _KERNEL_OPT_NLYNXFB,0x0\n .endif");
#endif

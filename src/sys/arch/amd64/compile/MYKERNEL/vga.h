#define	NVGA	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVGA
 .global _KERNEL_OPT_NVGA
 .equiv _KERNEL_OPT_NVGA,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVGA\n .global _KERNEL_OPT_NVGA\n .equiv _KERNEL_OPT_NVGA,0x1\n .endif");
#endif
#define	NVGA_RASTERCONSOLE	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NVGA_RASTERCONSOLE
 .global _KERNEL_OPT_NVGA_RASTERCONSOLE
 .equiv _KERNEL_OPT_NVGA_RASTERCONSOLE,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NVGA_RASTERCONSOLE\n .global _KERNEL_OPT_NVGA_RASTERCONSOLE\n .equiv _KERNEL_OPT_NVGA_RASTERCONSOLE,0x0\n .endif");
#endif
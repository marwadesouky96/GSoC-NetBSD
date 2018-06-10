#define	NETHER	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NETHER
 .global _KERNEL_OPT_NETHER
 .equiv _KERNEL_OPT_NETHER,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NETHER\n .global _KERNEL_OPT_NETHER\n .equiv _KERNEL_OPT_NETHER,0x1\n .endif");
#endif
#define	NFDDI	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NFDDI
 .global _KERNEL_OPT_NFDDI
 .equiv _KERNEL_OPT_NFDDI,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NFDDI\n .global _KERNEL_OPT_NFDDI\n .equiv _KERNEL_OPT_NFDDI,0x1\n .endif");
#endif
#define	NNETATALK	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NNETATALK
 .global _KERNEL_OPT_NNETATALK
 .equiv _KERNEL_OPT_NNETATALK,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NNETATALK\n .global _KERNEL_OPT_NNETATALK\n .equiv _KERNEL_OPT_NNETATALK,0x1\n .endif");
#endif
#define	NTOKEN	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NTOKEN
 .global _KERNEL_OPT_NTOKEN
 .equiv _KERNEL_OPT_NTOKEN,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NTOKEN\n .global _KERNEL_OPT_NTOKEN\n .equiv _KERNEL_OPT_NTOKEN,0x0\n .endif");
#endif
#define	NWLAN	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NWLAN
 .global _KERNEL_OPT_NWLAN
 .equiv _KERNEL_OPT_NWLAN,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NWLAN\n .global _KERNEL_OPT_NWLAN\n .equiv _KERNEL_OPT_NWLAN,0x1\n .endif");
#endif

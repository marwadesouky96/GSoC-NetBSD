#define	IPSEC	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC
 .global _KERNEL_OPT_IPSEC
 .equiv _KERNEL_OPT_IPSEC,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC\n .global _KERNEL_OPT_IPSEC\n .equiv _KERNEL_OPT_IPSEC,0x1\n .endif");
#endif
/* option `IPSEC_DEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_IPSEC_DEBUG
 .global _KERNEL_OPT_IPSEC_DEBUG
 .equiv _KERNEL_OPT_IPSEC_DEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_IPSEC_DEBUG\n .global _KERNEL_OPT_IPSEC_DEBUG\n .equiv _KERNEL_OPT_IPSEC_DEBUG,0x6e074def\n .endif");
#endif
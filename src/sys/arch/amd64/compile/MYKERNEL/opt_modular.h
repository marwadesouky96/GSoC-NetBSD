#define	MODULAR	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MODULAR
 .global _KERNEL_OPT_MODULAR
 .equiv _KERNEL_OPT_MODULAR,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MODULAR\n .global _KERNEL_OPT_MODULAR\n .equiv _KERNEL_OPT_MODULAR,0x1\n .endif");
#endif
#define	MODULAR_DEFAULT_AUTOLOAD	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD
 .global _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD
 .equiv _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD\n .global _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD\n .equiv _KERNEL_OPT_MODULAR_DEFAULT_AUTOLOAD,0x1\n .endif");
#endif
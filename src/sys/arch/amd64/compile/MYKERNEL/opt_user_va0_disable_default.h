/* option `USER_VA0_DISABLE_DEFAULT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT
 .global _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT
 .equiv _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT\n .global _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT\n .equiv _KERNEL_OPT_USER_VA0_DISABLE_DEFAULT,0x6e074def\n .endif");
#endif
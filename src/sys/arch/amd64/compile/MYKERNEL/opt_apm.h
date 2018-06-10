/* option `APM_POWER_PRINT' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APM_POWER_PRINT
 .global _KERNEL_OPT_APM_POWER_PRINT
 .equiv _KERNEL_OPT_APM_POWER_PRINT,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APM_POWER_PRINT\n .global _KERNEL_OPT_APM_POWER_PRINT\n .equiv _KERNEL_OPT_APM_POWER_PRINT,0x6e074def\n .endif");
#endif
/* option `APMDEBUG' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APMDEBUG
 .global _KERNEL_OPT_APMDEBUG
 .equiv _KERNEL_OPT_APMDEBUG,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APMDEBUG\n .global _KERNEL_OPT_APMDEBUG\n .equiv _KERNEL_OPT_APMDEBUG,0x6e074def\n .endif");
#endif
/* option `APM_NO_V12' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APM_NO_V12
 .global _KERNEL_OPT_APM_NO_V12
 .equiv _KERNEL_OPT_APM_NO_V12,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APM_NO_V12\n .global _KERNEL_OPT_APM_NO_V12\n .equiv _KERNEL_OPT_APM_NO_V12,0x6e074def\n .endif");
#endif
/* option `APM_V10_ONLY' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APM_V10_ONLY
 .global _KERNEL_OPT_APM_V10_ONLY
 .equiv _KERNEL_OPT_APM_V10_ONLY,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APM_V10_ONLY\n .global _KERNEL_OPT_APM_V10_ONLY\n .equiv _KERNEL_OPT_APM_V10_ONLY,0x6e074def\n .endif");
#endif
/* option `APM_DISABLE_INTERRUPTS' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APM_DISABLE_INTERRUPTS
 .global _KERNEL_OPT_APM_DISABLE_INTERRUPTS
 .equiv _KERNEL_OPT_APM_DISABLE_INTERRUPTS,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APM_DISABLE_INTERRUPTS\n .global _KERNEL_OPT_APM_DISABLE_INTERRUPTS\n .equiv _KERNEL_OPT_APM_DISABLE_INTERRUPTS,0x6e074def\n .endif");
#endif
/* option `APMDEBUG_VALUE' not defined */
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_APMDEBUG_VALUE
 .global _KERNEL_OPT_APMDEBUG_VALUE
 .equiv _KERNEL_OPT_APMDEBUG_VALUE,0x6e074def
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_APMDEBUG_VALUE\n .global _KERNEL_OPT_APMDEBUG_VALUE\n .equiv _KERNEL_OPT_APMDEBUG_VALUE,0x6e074def\n .endif");
#endif

/***
 * Suggest to use STM32CubeMX to setup the clock and copy the settings
***/

#pragma once

#include_next <mcuconf.h>

#undef STM32_LSECLK
#define STM32_LSECLK                0U
#define STM32_LSE_ENABLED FALSE

#if 1
#undef STM32_HSECLK
#define STM32_HSECLK                25000000U

#else

#undef STM32_HSECLK
#define STM32_HSECLK                8000000U
#define STM32_HSE_BYPASS

#undef STM32_PLLM_VALUE
#define STM32_PLLM_VALUE            8


#endif

//#define STM32_HSE_BYPASS

// #undef STM32_HSI_ENABLED
// #define STM32_HSI_ENABLED                   TRUE
// #undef STM32_LSI_ENABLED
// #define STM32_LSI_ENABLED                   TRUE
// #undef STM32_HSE_ENABLED
// #define STM32_HSE_ENABLED                   TRUE
// #undef STM32_LSE_ENABLED
// #define STM32_LSE_ENABLED                   FALSE
// #undef STM32_CLOCK48_REQUIRED
// #define STM32_CLOCK48_REQUIRED              TRUE
// #undef STM32_SW
// #define STM32_SW                            STM32_SW_HSI16
// #undef STM32_PLLSRC
// #define STM32_PLLSRC                        STM32_PLLSRC_HSE
// #undef STM32_PLLM_VALUE
// #define STM32_PLLM_VALUE                    4
// #undef STM32_PLLN_VALUE
// #define STM32_PLLN_VALUE                    96
// #undef STM32_PLLP_VALUE
// #define STM32_PLLP_VALUE                    4
// #undef STM32_PLLQ_VALUE
// #define STM32_PLLQ_VALUE                    4
// #define STM32_HPRE                          STM32_HPRE_DIV1
// #undef STM32_PPRE1
// #define STM32_PPRE1                         STM32_PPRE1_DIV1
// #undef STM32_PPRE2
// #define STM32_PPRE2                         STM32_PPRE2_DIV1

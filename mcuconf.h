/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include_next <mcuconf.h>


#undef STM32_LSECLK
#define STM32_LSECLK                0U

#undef STM32_HSECLK
#define STM32_HSECLK                25000000U

#define STM32_HSE_BYPASS

#undef STM32_HSI_ENABLED
#define STM32_HSI_ENABLED                   TRUE
#undef STM32_LSI_ENABLED
#define STM32_LSI_ENABLED                   TRUE
#undef STM32_HSE_ENABLED
#define STM32_HSE_ENABLED                   TRUE
#undef STM32_LSE_ENABLED
#define STM32_LSE_ENABLED                   FALSE
#undef STM32_CLOCK48_REQUIRED
#define STM32_CLOCK48_REQUIRED              TRUE
#undef STM32_SW
#define STM32_SW                            STM32_SW_PLL
#undef STM32_PLLSRC
#define STM32_PLLSRC                        STM32_PLLSRC_HSE
#undef STM32_PLLM_VALUE
#define STM32_PLLM_VALUE                    25
#undef STM32_PLLN_VALUE
#define STM32_PLLN_VALUE                    336
#undef STM32_PLLP_VALUE
#define STM32_PLLP_VALUE                    4
#undef STM32_PLLQ_VALUE
#define STM32_PLLQ_VALUE                    7
#define STM32_HPRE                          STM32_HPRE_DIV1
#undef STM32_PPRE1
#define STM32_PPRE1                         STM32_PPRE1_DIV4
#undef STM32_PPRE2
#define STM32_PPRE2                         STM32_PPRE2_DIV2

// Copyright 2022 kagurazakahope (@kagurazakahope)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#ifndef DEVICE_VER
#   define DEVICE_VER 0x0100
#endif // DEVICE_VER

#ifndef DESCRIPTION
#   define DESCRIPTION y_u0003_as_shell
#endif // DESCRIPTION

#ifndef DIODE_DIRECTION
#   define DIODE_DIRECTION COL2ROW
#endif // DIODE_DIRECTION

#ifndef MANUFACTURER
#   define MANUFACTURER kagurazakahope
#endif // MANUFACTURER

#ifndef PRODUCT
#   define PRODUCT y_u0003_as_shell
#endif // PRODUCT

#ifndef PRODUCT_ID
#   define PRODUCT_ID 0x0000
#endif // PRODUCT_ID

#ifndef VENDOR_ID
#   define VENDOR_ID 0xFEED
#endif // VENDOR_ID

#ifndef MATRIX_COLS
#   define MATRIX_COLS 22
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#   define MATRIX_ROWS 6
#endif // MATRIX_ROWS


#ifndef MATRIX_COL_PINS
#   define MATRIX_COL_PINS { C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2, C2 }
#endif // MATRIX_COL_PINS


#ifndef MATRIX_ROW_PINS
#   define MATRIX_ROW_PINS { D1, D1, D1, D1, D1, D1 }
#endif // MATRIX_ROW_PINS


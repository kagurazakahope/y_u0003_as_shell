#pragma once

#include "config_common.h"

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
#   define MATRIX_COLS 21
#endif // MATRIX_COLS

#ifndef MATRIX_ROWS
#   define MATRIX_ROWS 6
#endif // MATRIX_ROWS


#ifndef MATRIX_COL_PINS
#define MATRIX_COL_PINS { C12, D2, B4, B5, B6, B7, B8, B9, C13, C14, C15, C0, C1, C2, A0, A1, A2, C4, C5, B0, B1 }
#endif // MATRIX_COL_PINS


#ifndef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { C3, A3, A4, A5, A6, A7 }
#endif // MATRIX_ROW_PINS

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B14 }
#define ENCODER_RESOLUTION 4
#define MY_MUTE_BTN_DIRECT_PIN B13

#define MY_LED_FN_LOCK_PIN C10
#define LED_CAPS_LOCK_PIN C11
#define LED_NUM_LOCK_PIN B10
#define LED_SCROLL_LOCK_PIN A15


/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

//#define BACKLIGHT_PIN B7
//#define BACKLIGHT_LEVELS 4

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


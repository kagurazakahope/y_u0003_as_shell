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

#define DEVICE_VER 0x0100

#define DESCRIPTION y_u0003_as_shell

#define DIODE_DIRECTION COL2ROW

#define MANUFACTURER kagurazakahope

#define PRODUCT y_u0003_as_shell

#define PRODUCT_ID 0x0000

#define VENDOR_ID 0xFEED

#define MATRIX_COLS 21
#define MATRIX_ROWS 6
#define MATRIX_COL_PINS { B7, B6, B5, B4, B3, D2, C12, C11, C10, A15, A10, A9, A8, C9, A6, A3, A4, A1, A5, A2, A0 }
#define MATRIX_ROW_PINS { B10, B1, B0, C5, C4, A7 }

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B14 }
#define ENCODER_RESOLUTION 4
#define MY_MUTE_BTN_DIRECT_PIN B13

#define LED_CAPS_LOCK_PIN C11
#define LED_NUM_LOCK_PIN B10
#define LED_SCROLL_LOCK_PIN A15

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


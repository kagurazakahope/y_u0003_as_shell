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

#define DESCRIPTION Customized Full Media Keyboard with y_u0003 backshell

#define DIODE_DIRECTION COL2ROW

#define MANUFACTURER kagurazakahope

#define PRODUCT y_u0003_as_shell

#define PRODUCT_ID 0x0000

#define VENDOR_ID 0xFEED

#define MATRIX_COLS 17
#define MATRIX_ROWS 7
#define MATRIX_COL_PINS { A3, A4, A5, A6, A7, A8, C13, A10, A14, A15, A13, B0, B9, B10, B12, B13, B14 }
#define MATRIX_ROW_PINS { B8, B1, B3, B4, B5, B6, B7 }

#define ENCODERS_PAD_A { B15 }
#define ENCODERS_PAD_B { C15 }
#define ENCODER_RESOLUTION 4
#define MY_MUTE_BTN_DIRECT_PIN C14

#define LED_NUM_LOCK_PIN A0
#define LED_CAPS_LOCK_PIN A1
#define LED_SCROLL_LOCK_PIN A2

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


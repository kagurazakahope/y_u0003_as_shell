#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_fullsize_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS,   KC_CALC, KC_MPLY, KC_MPRV, KC_MNXT,

        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN,   KC_P7,   KC_P8,   KC_P9,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                 KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                     KC_UP,              KC_P1,   KC_P2,   KC_P3,
        KC_LCTL, MO(_FN), KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT,   KC_P0,            KC_PDOT, KC_PENT
    ),

    [_FN] = LAYOUT_fullsize_ansi(
        _______,          KC_WBAK, KC_WFWD, KC_WSTP, KC_WREF, KC_WSCH, KC_MSEL, KC_MYCM, KC_CALC, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT,   KC_WAKE, _______, KC_SLEP,   _______, _______, _______, _______,

        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, NK_ON,     _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, NK_OFF,    _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                                _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                     _______,            _______, _______, _______,
        _______, _______, _______, _______,                   _______,                            _______, _______, _______, _______,   _______, _______, _______,   _______,          _______, _______
    ),
};

// wait DELAY ms before unregistering media keys
#define MEDIA_KEY_DELAY 10

bool encoder_update_user(uint8_t index, bool clockwise) {
    //uint16_t held_keycode_timer = timer_read();
    if (clockwise) {
        register_code(KC_VOLU);
        //while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY);
        wait_ms(MEDIA_KEY_DELAY);
        unregister_code(KC_VOLU);
    } else {
        register_code(KC_VOLD);
        //while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY);
        wait_ms(MEDIA_KEY_DELAY);
        unregister_code(KC_VOLD);
    }
    return true;
}

static int mute_btn_level;
static int mute_btn_level_temp;
static bool debouncing = false;
static uint16_t debouncing_time;

void matrix_init_user(void) {
    // setPinOutput(MY_LED_FN_LOCK_PIN);
    // wait_ms(5);
    // writePin(MY_LED_FN_LOCK_PIN, IS_LAYER_ON(_FN_LOCK));

    // MUTE pin is bundled with BOOT0, external pull down and active high.
    setPinInput(MY_MUTE_BTN_DIRECT_PIN);
    //wait_ms(5);
    mute_btn_level = 0; // readPin(MY_MUTE_BTN_DIRECT_PIN);
    mute_btn_level_temp = mute_btn_level;
}

void matrix_scan_user(void) {
    bool mute_btn_level_now = readPin(MY_MUTE_BTN_DIRECT_PIN);
    if (mute_btn_level_now != mute_btn_level_temp) {
        // debouncing
        debouncing      = true;
        debouncing_time = timer_read();
        mute_btn_level_temp = mute_btn_level_now;
    }

    if (debouncing && timer_elapsed(debouncing_time) > DEBOUNCE)
    {
        debouncing = false;

        if (mute_btn_level_temp != mute_btn_level)
        {
            if (mute_btn_level_temp) {
                host_consumer_send(AUDIO_MUTE);
            } else {
                host_consumer_send(0);
            }
            mute_btn_level = mute_btn_level_temp;
        }
    }
}

#include QMK_KEYBOARD_H

/**************************
 * KEYBOARD LAYOUT SETTINGS
 **************************/
enum sofle_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _LILY
};

enum custom_keycodes {
    KC_16 = SAFE_RANGE,
    KC_32,
    KC_ES,
    KC_IS
};

/* 
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
/* Layer template 
  _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    | LILY  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |Enter | /LOWER  /       \RAISE \  |Space | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,   KC_7,    KC_8,    KC_9,   KC_0,     KC_BSPC,
  KC_GRV,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                              KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,     XXXXXXX,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                              KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,     DF(_LILY),   KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_LGUI, KC_LALT, KC_LCTL,  KC_ENT, MO(_LOWER),     MO(_RAISE),  KC_SPC, KC_RCTL, KC_RALT, KC_RGUI
),
/* 
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |      |      |      |      |      |                    |      |      |      |      |      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   R  |   E  |   F  |   G  |   '  |                    |      |  16  |  32  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   A  |   B  |   C  |   D  |   ,  |-------.    ,-------|   |  |   1  |   2  |   4  |   8  |      |
 * |------+------+------+------+------+------|  MUTE |    |QWERTY |------+------+------+------+------+------|
 * |      |      |  ES  |  IS  |      |      |-------|    |-------|      |   .  |   (  |   )  |   ~  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |Enter | /LOWER  /       \RAISE \  |Space | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_LILY] = LAYOUT(
  KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  XXXXXXX, KC_R,    KC_E,    KC_F,    KC_G,    KC_QUOT,                          XXXXXXX, KC_16,   KC_32,   XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_A,    KC_B,    KC_C,    KC_D,    KC_COMM,                          KC_PIPE, KC_1,    KC_2,    KC_4,    KC_8,    XXXXXXX,
  XXXXXXX, XXXXXXX, KC_ES,   KC_IS,   XXXXXXX, XXXXXXX, KC_MUTE,    DF(_QWERTY), XXXXXXX, KC_PDOT, KC_LPRN, KC_RPRN, KC_TILD, XXXXXXX,
                    KC_LGUI, KC_LALT, KC_LCTL, KC_ENT,  MO(_LOWER),  MO(_RAISE), KC_SPC,  KC_RCTL, KC_RALT, KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |   {  |   }  |   \  |                    |   /  |   7  |   8  |   9  |   -  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |   [  |   ]  |   |  |-------.    ,-------|   *  |   4  |   5  |   6  |   +  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |   (  |   )  |   _  |-------|    |-------|   0  |   1  |   2  |   3  |   .  |   =  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_LOWER] = LAYOUT(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, KC_BSLS,                          KC_PSLS, KC_KP_7, KC_KP_8, KC_KP_9, KC_PMNS, KC_F12,
  _______, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_PIPE,                          KC_PAST, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_UNDS, _______,        _______, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_PDOT, KC_PEQL,
                    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    | PgUp |      |  Up  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------| PgDn | Left | Down | Right|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | Caps |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'            '------''---------------------------'
 */
[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                          KC_PGUP, XXXXXXX, KC_UP,   XXXXXXX, _______, _______,
  _______, _______, _______, _______, _______, _______,                          KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
  KC_CAPS, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
),
};

/***************
 * OLED SETTINGS
 * OLED info: SSD1306 128x32
 * at default 6px font width, 8px font height, that means 5x16 character grid
 ***************/
#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_ln_P(PSTR("MODE"), false);
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _LILY:
            oled_write_ln_P(PSTR("Lily"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }

    oled_write_P(PSTR("\n"), false);

    // Print current layer
    oled_write_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }

    oled_write_P(PSTR("\n"), false);

    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

// /* From qmk docs; render a message before booting into bootloader mode. */
// void oled_render_boot(bool bootloader) {
//     oled_clear();
//     for (int i = 0; i < 16; i++) {
//         oled_set_cursor(0, i);
//         if (bootloader) {
//             oled_write_P(PSTR("Awaiting New Firmware "), false);
//         } else {
//             oled_write_P(PSTR("Rebooting "), false);
//         }
//     }

//     oled_render_dirty(true);
// }

// bool shutdown_user(bool jump_to_bootloader) {
//     oled_render_boot(jump_to_bootloader);
//     return true;
// }

#endif

/**************************
 * CUSTOM FUNCTION SETTINGS
 **************************/

 bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_16:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("16");
            } else {
                // when keycode is released
            }
            break;
        case KC_32:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("32");
            } else {
                // when keycode is released
            }
            break;
        case KC_ES:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("es");
            } else {
                // when keycode is released
            }
            break;
        case KC_IS:
            if (record->event.pressed) {
                // when keycode is pressed
                SEND_STRING("is");
            } else {
                // when keycode is released
            }
            break;
    }
    return true;
};

/******************
 * ENCODER SETTINGS
 ******************/

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    /* return false to avoid triggering higher-level handling */
    return false;
}

#endif

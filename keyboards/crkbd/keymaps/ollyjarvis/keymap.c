/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "layers.h"

// clang-format off
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

///////////////////////////////////////////////////// Typing ////////////////////////////////////////////////////

// ------------------------------------------------- 0: Text ------------------------------------------------- //

    [TYPING_0] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    RGB_TOG,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,     KC_J,    KC_L,    KC_U,    KC_Y,    KC_NO,   TG(G1),
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_TAB,  KC_A,LGUI_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,KC_M,RSFT_T(KC_N),RCTL_T(KC_E),RGUI_T(KC_I),KC_O,KC_SCLN,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,     KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                         KC_NO,   LT(T1,KC_ESC), KC_SPC,   KC_BSPC, LT(T2,KC_ENT), KC_RGHT
//                      +--------+--------------+--------++--------+--------------+--------+
    ),

// ----------------------------------------------- 1: Others #1 ---------------------------------------------- //

// - - - - - - - - - - - - - - - Numbers + Functions  - - - - - - - - - - Numpad - - - - - - - - - - - - - - - //

    [TYPING_1] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    RGB_MOD,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),

// ----------------------------------------------- 2: Others #2 ---------------------------------------------- //

// - - - - - - - - - - - - - Symbols - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

    [TYPING_2] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    RGB_HUI,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_NO,   KC_PIPE, KC_NUHS, KC_PSLS, KC_LCBR, KC_LBRC,  KC_RBRC, KC_RCBR, KC_BSLS, KC_MINS, KC_PLUS, KC_TRNS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    RGB_MODE_RAINBOW,   KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_NO,    KC_NO,   KC_RPRN, KC_NO,   KC_UNDS, KC_EQL,  KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),

// ------------------------------------------------- 3: Gaming ----------------------------------------------- //

// - - - - - - - - - - - - - Symbols - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

    [GAMING_1] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_TAB,  KC_Q, KC_W,   KC_E, KC_R,  KC_T,  KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_CAPS,   KC_A, KC_S, KC_D, KC_F, KC_G,  KC_H, KC_J, KC_K, KC_L, KC_TRNS, KC_TRNS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_LSFT,   KC_LCTL,   KC_Z,   KC_X,   KC_C, KC_V,    KC_B,   KC_N, KC_M,   KC_TRNS, KC_TRNS,  KC_TRNS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_NO, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_NO
//                            +--------+--------+--------++--------+--------+--------+
    ),
};
// clang-format on
;
#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 60,  60,  24,  0,   0, 0, 0, 0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0, 0, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,   0,   0,   0,   0,   0,   0,  0, 0, 0, 0, 0, 0, 0, 0, 0,   0,   0,   24,  60,  60,  24,  0,   0,   0,   0,   0,   0, 0, 0, 0, 0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  12, 14, 14, 14, 14, 254, 254, 254, 252, 0, 0, 0, 0, 0, 0, 0, 12, 14, 14, 134, 134, 142, 142, 158, 252, 252, 248, 0, 0, 0, 0, 0, 0, 14, 14, 254, 254, 252, 240, 120, 28, 14, 14, 126, 126, 60, 0, 0, 0, 6, 62, 254, 252, 224, 0, 0, 0, 0, 192, 248, 254, 126, 14, 0, 0, 0, 0, 0, 0, 12, 14, 14, 254, 254, 254, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 252, 252, 206, 206, 134, 134, 14, 14, 12, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 126, 255, 255, 231, 195, 193, 193, 193, 113, 127, 255, 255, 224, 0, 0, 0, 0, 0, 192, 192, 255, 255, 255, 225, 192, 192, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 15, 127, 254, 240, 224, 252, 127, 15, 1, 0, 0, 0, 0, 0, 0, 0, 192, 192, 192, 192, 255, 255, 255, 255, 192, 192, 192, 192, 0, 0, 0, 0, 64, 224, 224, 225, 193, 195, 195, 199, 231, 255, 255, 126, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 56, 56, 56, 28, 30, 31, 15,  7,   3,   0,   0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0, 0, 0, 0, 0, 0, 0,  0,  0,   0,   0,   0,   0,   0,  0,  0,  0,   0,   0,  0, 0, 0, 0, 0,  0,   0,   0,   0, 0, 0, 0, 0,   0,   0,   0,   0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,   0,   0,   0,   0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   0,   0,   1,   1,   1,   1,   0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
    render_logo();
    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    }

    return rotation;
}

void oled_render_boot(bool bootloader) {
    oled_clear();
    for (int i = 0; i < 16; i++) {
        oled_set_cursor(0, i);
        if (bootloader) {
            oled_write_P(PSTR("Awaiting New Firmware "), false);
        } else {
            oled_write_P(PSTR("Rebooting "), false);
        }
    }

    oled_render_dirty(true);
}

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
    return false;
}

#endif /* ifdef OLED_ENABLE */

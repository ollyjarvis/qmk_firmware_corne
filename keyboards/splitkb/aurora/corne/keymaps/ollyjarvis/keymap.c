/***************************************************************************************************************\
* Keymap definition.                                                                                            *
*                                                                                                               *
* Copyright 2021-2022  Leandro Emmanuel Reina Kiperman <@kip93>                                                 *
*                                                                                                               *
* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General    *
* Public License as published by the Free Software Foundation, either version 3 of the License, or (at your     *
* option) any later version.                                                                                    *
*                                                                                                               *
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the    *
* implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License   *
* for more details.                                                                                             *
*                                                                                                               *
* You should have received a copy of the GNU General Public License along with this program. If not, see        *
* <http://www.gnu.org/licenses/>.                                                                               *
\***************************************************************************************************************/

// https://docs.qmk.fm/#/keymap
// https://docs.qmk.fm/#/keycodes

#include QMK_KEYBOARD_H

#include "layers.h"

// clang-format off
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

///////////////////////////////////////////////////// Typing ////////////////////////////////////////////////////

// ------------------------------------------------- 0: Text ------------------------------------------------- //

    [TYPING_0] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    RGB_TOG, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,     KC_J,    KC_L,    KC_U,    KC_Y,    KC_LBRC, KC_RBRC,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_TAB,  LALT_T(KC_A),LGUI_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,KC_M,RSFT_T(KC_N),RCTL_T(KC_E),RGUI_T(KC_I),RALT_T(KC_O),KC_SCLN,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,     KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                         MT(DM_REC1, DM_PLY1), KC_SPC, LT(T1,KC_ENT),  LT(T2,KC_ENT), KC_BSPC, DM_RSTP
//                      +--------+--------------+--------++--------+--------------+--------+
    ),

// ----------------------------------------------- 1: Others #1 ---------------------------------------------- //

// - - - - - - - - - - - - - - - Numbers + Functions  - - - - - - - - - - Numpad - - - - - - - - - - - - - - - //

    [TYPING_1] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    BL_TOGG, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PAST,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_PSLS,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),

// ----------------------------------------------- 2: Others #2 ---------------------------------------------- //

// - - - - - - - - - - - - - Symbols - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - //

    [TYPING_2] = LAYOUT_split_3x6_3(
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_NO,   KC_PIPE, KC_NUHS, KC_PSLS, KC_LCBR, KC_LBRC,  KC_RBRC, KC_RCBR, KC_BSLS, KC_MINS, KC_PLUS, KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
    KC_NO,   RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_UNDS, KC_EQL,  KC_NO,
// +--------+--------+--------+--------+--------+--------++--------+--------+--------+--------+--------+--------+
                               KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
//                            +--------+--------+--------++--------+--------+--------+
    ),
};
// clang-format on

#ifdef OLED_ENABLE

bool oled_task_user() {
    oled_set_cursor(0, 1);

    switch (get_highest_layer(layer_state)) {
        case T0:
            oled_write("Alpha", false);
            break;
        case T1:
            oled_write("Number", false);
            break;
        case T2:
            oled_write("Symbol", false);
            break;
    }
    return false;
}

#endif

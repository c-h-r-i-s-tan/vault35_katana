
 /* Copyright 2023 chris_tan
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

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(

    KC_Q,             KC_W,             KC_E,               KC_R,           KC_T,           KC_Y,           KC_U,               KC_I,              KC_O,             KC_P,
    LSFT_T(KC_A),     KC_S,             KC_D,               LT(3,KC_F),     KC_G,           KC_H,           LT(3,KC_J),         KC_K,              KC_L,             RSFT_T(KC_QUOTE),
    KC_Z,             LCTL_T(KC_X),     LALT_T(KC_C),       LGUI_T(KC_V),   KC_B,           KC_N,           RGUI_T(KC_M),       RALT_T(KC_COMM),   RCTL_T(KC_DOT),   KC_SLSH,
    KC_NO,            KC_TAB,           LT(1,KC_ENTER),                     KC_NO,          LT(2,KC_SPC),                       KC_BSPC,           KC_NO
  ),

  [1] = LAYOUT_all(

    KC_ESC,   KC_NO,    KC_UP,    KC_NO,     KC_NO,   KC_NO,     KC_7,  KC_8,  KC_9,  KC_NO,
    KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_NO,   KC_MINUS,  KC_4,  KC_5,  KC_6,  KC_PLUS,
    KC_LSFT,  KC_NO,    KC_NO,    KC_NO,     KC_NO,   KC_UNDS,   KC_1,  KC_2,  KC_3,  KC_EQL,
    KC_NO,    KC_NO,    KC_TRNS,  KC_NO,     MO(4),   KC_0,      KC_DOT
  ),

  [2] = LAYOUT_all(

    KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR,   KC_PERC,   KC_CIRC,   KC_AMPR,  KC_ASTR,   KC_NO,    KC_DEL,
    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_TILD,   KC_NO,     KC_NO,    KC_NO,     KC_DQT,   KC_PIPE,
    KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_SCLN,   KC_COLN,  KC_BSLS,
    KC_NO,    KC_NO,  MO(4),    KC_NO,    KC_TRNS,   KC_NO,     KC_NO
  ),

  [3] = LAYOUT_all(

    KC_LPRN,    KC_NO,  KC_NO,    KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_RPRN,
    KC_LCBR,    KC_NO,  KC_NO,    KC_TRNS,    KC_TILD,    KC_NO,    KC_TRNS,  KC_NO,    KC_DQT,    KC_RCBR,
    KC_LBRC,    KC_NO,  KC_NO,    KC_NO,      KC_NO,      KC_NO,    KC_NO,    KC_SCLN,  KC_COLN,   KC_RBRC,
    KC_NO,      KC_NO,  KC_NO,    KC_NO,      KC_NO,      KC_NO,    KC_NO
  ),

  [4] = LAYOUT_all(

    RESET,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_NO,
    KC_F1,  KC_F2,  KC_F3,    KC_F4,    KC_F5,    KC_F6,  KC_F7,    KC_F8,  KC_F9,  KC_F10,
    KC_NO,  KC_NO,  KC_TRNS,  KC_NO,    KC_TRNS,  KC_NO,  KC_NO
  ),


};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [4] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

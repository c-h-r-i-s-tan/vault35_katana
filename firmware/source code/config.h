/*
Copyright 2023 chris_tan
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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x03EB
#define PRODUCT_ID   0x2FF4
#define DEVICE_VER   0x0001
#define MANUFACTURER chris_tan
#define PRODUCT      vault35_katana

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { D0, F0, D7, B4 }
#define MATRIX_COL_PINS { F1, F4, F5, E6, F6, D2, D3, D5, D4, D6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
// RGB settings
#define RGB_DI_PIN D1
#define RGBLED_NUM 1
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define VIALRGB_NO_DIRECT
*/

// Rotary encoder
#define ENCODERS_PAD { B6, B5 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 175
#define IGNORE_MOD_TAP_INTERRUPT

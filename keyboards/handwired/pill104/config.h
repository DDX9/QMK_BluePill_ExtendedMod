 /* Copyright 2020 Imam Rafii 
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
#pragma once

#include "config_common.h"

#define VENDOR_ID 0x44A3
#define PRODUCT_ID 0x54A3
#define DEVICE_VER 0x0001

#define MANUFACTURER "MOS"
#define PRODUCT "MACTRO"

#define DIODE_DIRECTION COL2ROW
#define MATRIX_HAS_GHOST

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 10

/* key matrix pins */
/*
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5, B6 }
#define MATRIX_COL_PINS { B7, C0, C1, C2, C3, C4, C5, C6, C7, D0, D1, D2, D3, D4, D5, D6, D7, E0, E1, E2, E3, E4, E5 }
#define UNUSED_PINS
*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 1

/* Backlighting include */

#define BACKLIGHT_PIN           A0
#define BACKLIGHT_PWM_DRIVER    PWMD5
#define BACKLIGHT_PWM_CHANNEL   1
#define BACKLIGHT_LEVELS        5
#define BREATHING_PERIOD        6

#define LED_CAPS_LOCK_PIN A1
/* Encoder
#define ENCODERS_PAD_A \
    { B9 }
#define ENCODERS_PAD_B \
    { B8 }
#define ENCODER_RESOLUTION 2
 */
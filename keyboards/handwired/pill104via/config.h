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

#define MANUFACTURER "MOS-VIA"
#define PRODUCT "MACTROVIA"

#define DIODE_DIRECTION COL2ROW

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

 //VIA EEPROM USAGE, works but mess up the whole eeprom
 #define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 34

// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR 35
// DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR = DYNAMIC_KEYMAP_EEPROM_ADDR + (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2)
// 35+(4*11*10*2)=915
//DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE = 1024 - DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
// 1024-914=109
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 915    // **** CHANGE THIS BASED ON MATRIX_ROWS & MATRIX_COLS ****
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 109    // **** CHANGE THIS BASED ON 1024-DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR ****
#define DYNAMIC_KEYMAP_MACRO_COUNT 16

// // EEPROM usage
// #define EEPROM_MAGIC 0x451F
// #define EEPROM_MAGIC_ADDR 32
// // Bump this every time we change what we store
// // This will automatically reset the EEPROM with defaults
// // and avoid loading invalid data from the EEPROM
// #define EEPROM_VERSION 0x08
// #define EEPROM_VERSION_ADDR 34

// // Dynamic keymap starts after EEPROM version
// #define DYNAMIC_KEYMAP_EEPROM_ADDR 35
// // DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR = DYNAMIC_KEYMAP_EEPROM_ADDR + (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2)
// // 34+(1*11*10*2)=254
// //DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE = 1024 - DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
// // 1024-254=110
// #define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 254    // **** CHANGE THIS BASED ON MATRIX_ROWS & MATRIX_COLS ****
// #define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 770    // **** CHANGE THIS BASED ON 1024-DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR ****
// #define DYNAMIC_KEYMAP_MACRO_COUNT 16
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
/*
 #include QMK_KEYBOARD_H

enum layers {
    _BL,
    _FL
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    { B9, B8, B7, B6,    B5, B4, B3, A15,    A12, A11, A10, A9,    A8, B15, B14, B13,    B12, B11, B10, B1,   B0, A1 }
    	[_BL]=KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_SLSH, KC_ASTR, KC_MINS, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_HOME, KC_NO, KC_PGUP, KC_PLUS, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_NO, KC_5, KC_NO, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, KC_NO, KC_END, KC_NO, KC_PGDN, KC_ENT, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LALT, KC_LGUI, KC_MENU, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_INS, KC_DEL 
        ),
        [_FL]=KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_SLSH, KC_ASTR, KC_MINS, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_HOME, KC_NO, KC_PGUP, KC_PLUS, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_NO, KC_5, KC_NO, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, KC_NO, KC_END, KC_NO, KC_PGDN, KC_ENT, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LALT, KC_LGUI, KC_MENU, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_INS, KC_DEL
        )

    [_BL] = LAYOUT(
        KC_ESC,     KC_NO,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,  KC_F9,     KC_F10,     KC_F11,     KC_F12,     KC_PSCREEN, KC_SLCK,    KC_PAUS,                       
        KC_GRV,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,    KC_9,   KC_0,      KC_MINS,    KC_EQL,     KC_BSPC,    KC_INS,     KC_HOME,    KC_PGDOWN   KC_NUMLOCK, KC_PSLS,    KC_PAST,    KC_PMNS
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,      KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_DEL,     KC_END,     KC_PGUP     KC_P7,      KC_P8,      KC_P9,      KC_PPLS
        KC_CLCK,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN,   KC_QUOT,    KC_NO,      KC_ENT,     KC_NO,      KC_NO,      KC_NO,      KC_P4,      KC_P5,      KC_P6,      KC_NO
        KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,   KC_NO,      KC_NO,      KC_RSFT,    KC_NO,      KC_UP,      KC_NO,      KC_P1,      KC_P2,      KC_P3,      KC_PENT
        MO(_FL),    KC_LGUI,KC_LALT,KC_NO,  KC_NO   KC_SPC, KC_NO,  KC_NO   KC_RALT, KC_RGUI,MO(_FL),   KC_NO,      KC_NO,      KC_RCTL     KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_P0,      KC_NO,      KC_PDOT,    KC_NO
    ),
    [_FL] = LAYOUT(
        KC_ESC,     KC_NO,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,  KC_F9,     KC_F10,     KC_F11,     KC_F12,     KC_PSCREEN, KC_SLCK,    KC_PAUS,                       
        KC_GRV,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,      KC_MINS,    KC_EQL,     KC_BSPC,    KC_INS,     KC_HOME,    KC_PGDOWN   KC_NUMLOCK, KC_PSLS,    KC_PAST,    KC_PMNS
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,      KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_DEL,     KC_END,     KC_PGUP     KC_P7,      KC_P8,      KC_P9,      KC_PPLS
        KC_CLCK,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN,   KC_QUOT,    KC_NO,      KC_ENT,     KC_NO,      KC_NO,      KC_NO,      KC_P4,      KC_P5,      KC_P6,      KC_NO
        KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,   KC_NO,      KC_NO,      KC_RSFT,    KC_NO,      KC_UP,      KC_NO,      KC_P1,      KC_P2,      KC_P3,      KC_PENT
        MO(_FL),    KC_LGUI,KC_LALT,KC_NO,  KC_NO   KC_SPC, KC_NO,  KC_NO   KC_RALT, KC_RGUI,MO(_FL),   KC_NO,      KC_NO,      KC_RCTL     KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_P0,      KC_NO,      KC_PDOT,    KC_NO
    )
};

#ifdef OLED_DRIVER_ENABLE

static void render_oled(void) {
    oled_write_P(PSTR("Ikta's Pill60"), false);
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
    oled_write_P(PSTR("   "), false);
    switch (get_highest_layer(layer_state)) {
        case _BL:
            oled_write_P(PSTR("Base"), false);
            break;
        case _FL:
            oled_write_P(PSTR("Function"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Base"), false);
    }
    oled_write_P(PSTR("       "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return rotation;
}

void oled_task_user(void) {
    render_oled();
}

#endif

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            tap_code(KC_A);
        } else {
            tap_code(KC_B);
        }
    }
}

#endif
*/



#include QMK_KEYBOARD_H
#define BSC_LYR 0 
#define BCKLG_LYR 1
 
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[BSC_LYR]=LAYOUT(
		KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT, 
        
        KC_LCTL,    KC_LALT,    KC_LGUI,                            KC_SPC,     MO(BCKLG_LYR),   KC_RALT,   KC_MUTE,
        KC_PMNS,    KC_PSLS,    KC_NLCK,    KC_PAUS,    KC_SLCK,    KC_PSCR,    KC_F12,     KC_F11,     KC_F10,      
        KC_PAST,    KC_P8,       KC_P7,     KC_PGUP,    KC_HOME,    KC_INS,     KC_BSPC,    KC_EQL,     KC_MINS,    KC_0,
        KC_P9,      KC_P6,      KC_P5,      KC_PGDN,    KC_END,     KC_DEL,     KC_BSLS,    KC_RBRC,    KC_LBRC,    KC_P,
        KC_PPLS,    KC_P3,      KC_P2,      KC_P1,      KC_P4,      KC_UP,                  KC_ENT,     KC_QUOT,    KC_SCLN,  
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        KC_PENT,    KC_PDOT,                KC_P0,      KC_RIGHT,   KC_DOWN,    KC_LEFT,    KC_RSFT,    KC_SLSH,    KC_RCTL
),

    [BCKLG_LYR]=LAYOUT(
       KC_ESC,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT, 
        KC_LCTL,    KC_LGUI,    KC_LALT,                            KC_SPC,     KC_MENU,          KC_RALT,   TO(BSC_LYR) ,
        KC_PMNS,    KC_PSLS,    KC_NLCK,    KC_PAUS,    KC_SLEP,    KC_PSCR,    KC_F12,     KC_F11,     KC_F10,      
        KC_PAST,    KC_P8,       KC_P7,     KC_BRIU,    KC_HOME,    KC_INS,     KC_BSPC,    KC_EQL,     KC_MINS,    KC_0,
        KC_P9,      KC_P6,      KC_P5,      KC_BRID,    KC_END,     KC_DEL,     KC_BSLS,    KC_RBRC,    KC_LBRC,    KC_P,
        KC_PPLS,    KC_P3,      KC_P2,      KC_P1,      KC_P4,      KC_VOLU,                  KC_ENT,     KC_QUOT,    KC_SCLN,     
        KC_PENT,    KC_PDOT,                KC_P0,      KC_MNXT,   KC_VOLD,    KC_MPRV,    KC_RSFT,    KC_SLSH,    KC_RCTL
)

};
/*
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case BSC_LYR:
        backlight_level(6);
        break;
    case WIN_LYR:
        backlight_level(0);
        break;
    case BCKLG_LYR:
        backlight_level(3);
        break;
    default: //  for any other layers, or the default layer
        backlight_disable();
        break;
    }
  return state;
}
*/

/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
*/
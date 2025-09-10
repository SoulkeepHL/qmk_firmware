#include "rottay.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_MUTE, LCTL(KC_F15), 
		BL_STEP, KC_F16, 
		LCTL(KC_F16), LCTL(KC_F13), LCTL(KC_F14), LCTL(LSFT(KC_GRV)), 
		LALT(KC_F16), LALT(KC_F15), LALT(KC_F14), LALT(KC_F13), 
		KC_F19, KC_F20, LSFT(KC_F13), KC_F18, 
		KC_F15, LSFT(KC_F16), LSFT(KC_F15), LSFT(KC_F14), KC_F17, 
		KC_F13, KC_F14),


};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		DDRD |= (1 << 7); PORTD &= ~(1 << 7);
	} else {
		DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
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

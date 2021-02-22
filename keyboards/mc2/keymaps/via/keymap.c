#include "mc2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_1, KC_2, KC_3,
		KC_4, KC_5, KC_6),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS),


};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  
  { 1 , 2 , 3},
  { 4 , 5 , 6}
  
}, {
  // LED Index to Physical Position
   { 0,  0 },{ 112,  0 },{ 224,  0 },  { 0,  64 }, {  112,  64 }, {  224,  64 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4 //
} };

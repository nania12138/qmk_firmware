#include "mc2.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_1, KC_2, KC_3,
		KC_DOT, KC_0),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS)

};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  //{   6     , NO_LED    , 7     },
  { 2  , 1    , 0},
  {   4     , NO_LED    , 3}//,
  //{   5     , NO_LED    , 8     }
}, {
  // LED Index to Physical Position
   { 23,  6 },{ 95,  48 },{ 190,  16 },  { 155,  37 }, {  17,  37 }//, {  0,  0 }, {  0,  64 }, {  224,  0 }, {  224,  64 }
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1//, 1,1,1,1
} };

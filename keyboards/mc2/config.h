#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4D43  //MC
#define PRODUCT_ID      0x0001  //first
#define DEVICE_VER      0x0001
#define MANUFACTURER    MC2
#define PRODUCT         MC2 MX6
#define DESCRIPTION     A 6 keys small RGB keyboards

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B7 }
#define MATRIX_COL_PINS { D5, D3, D2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN E6
#ifdef RGB_DI_PIN
#define RGBLED_NUM 4


#endif

// This is a 7-bit address, that gets left-shifted and bit 0
// set to 0 for write, 1 for read (as per I2C protocol)
// The address will vary depending on your wiring:
// 0b1110100 AD <-> GND
// 0b1110111 AD <-> VCC
// 0b1110101 AD <-> SCL
// 0b1110110 AD <-> SDA
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000

#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 6
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL)
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif

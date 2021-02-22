#include "mc2.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C3_10,  C4_10,  C1_9},
    {0, C4_1,  C3_1,  C2_1},
    {0, C9_6,  C8_6,  C7_6},
    {0, C6_12,  C7_12,  C5_12},
    {0, C9_14,  C8_14,  C7_14},
    {0, C8_4,  C6_4,  C5_4}

};

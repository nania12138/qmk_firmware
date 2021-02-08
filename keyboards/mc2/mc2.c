#include "mc2.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C3_9,  C2_9,  C1_9},
    {0, C6_9,  C5_9,  C4_9},
    {0, C9_9,  C8_9,  C7_9},
    {0, C3_1,  C2_2,  C1_1},
    {0, C6_1,  C5_2,  C4_1},
    {0, C9_1,  C8_2,  C7_1},

}

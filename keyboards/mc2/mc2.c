#include "mc2.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, H_1,  G_1,  I_1},
    {0, E_1,  D_1,  F_1},
    {0, B_1,  A_1,  C_1},
    {0, H_2,  G_2,  I_2},
    {0, E_2,  D_2,  F_2},
    {0, B_2,  A_2,  C_2},

};

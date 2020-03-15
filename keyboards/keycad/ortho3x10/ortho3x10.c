#include "ortho3x10.h"
#include "quantum/rgb_matrix.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0,      1,      2,      3,      4,      NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position
  { 0, 32 }, { 56, 32 }, { 112, 32 }, { 168, 32 }, { 224, 32 }
}, {
  // LED Index to Flag
  LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
} };
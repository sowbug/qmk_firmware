#include "quantum.h"
#include "backlight.h"
#include "backlight_driver_common.h"

#ifdef BACKLIGHT_BREATHING
#    error "Backlight breathing is not available for rgb_matrix PWM. Please disable."
#endif

void backlight_init_ports(void) {}

void backlight_set(uint8_t level) {}

void backlight_task(void) {}

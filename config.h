#pragma once

#include "wrappers.h"

// Common QMK variables
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define TAP_CODE_DELAY 10

#ifdef COMBO_ENABLE
# define COMBO_COUNT 8
#endif

#ifdef RGB_MATRIX_ENABLE
#  define RGB_MATRIX_KEYPRESSES
#  define RGB_DISABLE_WHEN_USB_SUSPENDED true
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#endif

#ifdef OLED_DRIVER_ENABLE
#  define OLED_TIMEOUT 5000
#endif

#ifdef POINTING_DEVICE_ENABLE
#   define PIMORONI_TRACKBALL_INVERT_Y
#   define PIMORONI_TRACKBALL_ROTATE
#endif
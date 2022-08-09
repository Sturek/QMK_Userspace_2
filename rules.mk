SRC += Sturek.c

# Common feature for all keyboards
BOOTMAGIC_ENABLE = yes
EXTRAKEY_ENABLE = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no

# RGB matrix lights for BM40
ifeq ($(strip $(KEYBOARD)), bm40hsrgb)
    RGB_MATRIX_ENABLE = yes
    RGB_MATRIX_CUSTOM_USER = yes
endif

# Split features for Corne
ifeq ($(strip $(KEYBOARD)), crkbd/rev1/common)
    WPM_ENABLE = yes
    MOUSEKEY_ENABLE = yes
    OLED_DRIVER_ENABLE = yes
endif

# Features for 3w6
ifeq ($(strip $(KEYBOARD)), 3w6/rev2)
    POINTING_DEVICE_ENABLE = yes
    POINTING_DEVICE_DRIVER = pimoroni_trackball
    SRC += pimoroni_trackball.c
    MOUSEKEY_ENABLE = yes
    MACROS_ENABLED = yes
    COMBO_ENABLE = yes
    SRC += combos.c
endif

ifeq ($(strip $(KEYBOARD)), ferris/sweep)
    MACROS_ENABLED = yes
    COMBO_ENABLE = yes
    SRC += combos.c
endif
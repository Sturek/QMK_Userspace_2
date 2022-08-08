#pragma once

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LT(4, KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LT(4, KC_I)
#define HOME_O RGUI_T(KC_O)

// QWERTY
#define BASE \
KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
KC_DEL,  KC_LALT, KC_LCTL, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

// Lower
#define LOWER \
_______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, KC_MINS, KC_EQL,  KC_BSLS, _______, _______, \
_______, _______, _______, KC_LCBR, KC_RCBR, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, \
KC_CAPS, _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, MO(3),   KC_HOME, KC_PGDN, KC_PGUP, KC_END

// Raise
#define RAISE \
KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
_______, _______, _______, _______, MO(3),   _______, _______, _______, _______, _______, _______, _______

// Adjust
#define ADJUST \
RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
_______, KC_F11,  KC_F12,  _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, \
_______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_DEL,  _______, _______, _______, \
_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ 

#define LAYOUT_wrapper_ortho_4x12(...) LAYOUT_ortho_4x12(__VA_ARGS__)

#define WRITE \
KC_Q,    RALT_T(KC_W),    KC_F,   KC_P,          KC_B,         KC_J,    KC_L,           KC_U,    RALT_T(KC_Y),    KC_SEMICOLON, \
HOME_A,  HOME_R,          HOME_S, HOME_T,        LT(4,KC_G),   KC_M,    HOME_N,         HOME_E,  HOME_I,          HOME_O, \
KC_Z,    LALT_T(KC_X),    KC_C,   KC_D,          KC_V,         KC_K,    KC_H,           KC_COMM, LALT_T(KC_DOT),  KC_SLASH, \
                    LCTL(KC_C), LT(3,KC_DEL), LT(1,KC_ENTER),           LT(2,KC_SPACE),   KC_BACKSPACE, LCTL(KC_V)

#define COUNT \
KC_1,               KC_2,          KC_3,            KC_4,             KC_5,        KC_6,     KC_7,             KC_8,                 KC_9,            KC_0, \
KC_EXCLAIM, KC_AT, KC_HASH, KC_MINUS, LT(4,KC_PERCENT),  KC_EQUAL, KC_PLUS,  S(KC_8),  KC_BSLS, KC_DQT, \
KC_TILDE,           KC_GRAVE,      KC_LBRC,         KC_LPRN,          KC_LCBR,     KC_RCBR,  KC_RPRN,          KC_RBRC,              KC_AMPERSAND,    KC_QUOTE, \
                        TG(4), LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE, _______

#define SIGN \
KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, \
RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_7), RALT(KC_6), KC_DOLLAR, RALT(KC_5), KC_AMPERSAND,  S(KC_BSLS), SAGR(KC_6), \
RALT(KC_8), SAGR(KC_EQUAL), SAGR(KC_4), SAGR(KC_LBRC), RALT(KC_LBRC), RALT(KC_RBRC), SAGR(KC_RBRC), RALT(KC_MINUS), _______, SAGR(KC_BSLS), \
                              _______, LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE, _______

#define MOVE \
RGB_TOG,   KC_MPRV,    KC_UP,      KC_MNXT,    KC_VOLU,    RGB_VAD,     RGB_VAI,       _______,        KC_F11,     KC_F12, \
RGB_MOD,   KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_VOLD,    _______,     KC_HOME,       KC_PGUP,        KC_PGDN,    KC_END, \
RGB_HUD,   RGB_HUI,    KC_MPLY,    _______,    KC_MUTE,       _______,     _______,       _______,        _______,   RESET \
                        _______, LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE, _______

#define SCHREIB \
RALT(KC_Q), _______, _______, RALT(KC_P), _______,   _______,   _______, RALT(KC_Y), RALT(KC_Y), _______, \
RALT(KC_Q), _______, RALT(KC_S), _______,    _______,   _______, KC_BTN1,    _______,    _______, RALT(KC_P), \
_______,    _______, _______, _______,    _______,   _______, KC_BTN2,    _______,    _______,    _______, \
               TG(4), LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE, _______

// #define LAYOUT_36key_w(...) LAYOUT(__VA_ARGS__)
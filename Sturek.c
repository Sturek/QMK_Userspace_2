// Init effect for RGB boards only
#ifdef RGB_MATRIX_ENABLE
void matrix_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}
#endif

// Default layer effects for BM40 only
#ifdef KEYBOARD_bm40hsrgb
layer_state_t layer_state_set_user(layer_state_t state) {

    // Default layer keypress effects
    switch (get_highest_layer(default_layer_state)) {
    case 1:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
        break;
    case 0:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINDROPS);
        break;
    }
    return state;
}
#endif // KEYBOARD_bm40hsrgb

enum combos {
  QW_ESC,
  QA_TAB,
  FP_PLAY,
  EH_DQUOTE,
  IH_QUOTE,
  PB_EXCL,
  HCO_TAB,
  CD_TAB,
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, RALT_T(KC_W), COMBO_END};
const uint16_t PROGMEM qa_combo[] = {KC_Q, HOME_A, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM eh_combo[] = {HOME_E, KC_H, COMBO_END};
const uint16_t PROGMEM ih_combo[] = {HOME_I, KC_H, COMBO_END};
const uint16_t PROGMEM pb_combo[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM hco_combo[] = {KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM cd_combo[] = {KC_C, KC_D, COMBO_END};



__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
          #ifdef MACROS_ENABLED
            case KC_ETREMA:  // Types " and e in US Int'l
                if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(1) SS_TAP(X_E));
                } else {
                
                }
                break;
            case KC_NDASH:
                if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_0)));
                } else {

                }
                break;
            case KC_MDASH:
                if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_1)));
                } else {

                }
                break;
          #endif
    }

  return process_record_keymap(keycode, record);
}

combo_t key_combos[COMBO_COUNT] = {
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [QA_TAB] = COMBO(qa_combo, KC_TAB),
  [FP_PLAY] = COMBO(fp_combo, KC_MPLY),
  [EH_DQUOTE] = COMBO(eh_combo, KC_DQT),
  [IH_QUOTE] = COMBO(ih_combo, KC_QUOT),
  [PB_EXCL] = COMBO(pb_combo, KC_EXLM),
  [HCO_TAB] = COMBO(hco_combo, KC_TAB),
  [CD_TAB] = COMBO(cd_combo, KC_TAB),

};
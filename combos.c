#include QMK_KEYBOARD_H

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
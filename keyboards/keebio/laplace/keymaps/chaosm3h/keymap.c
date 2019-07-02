#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN1 1
#define _FN2 2

#define FN1 MO(_FN1)
#define FN2 MO(_FN2)
#define SP_FN1 LT(_FN1, KC_SPACE)
#define SP_FN2 LT(_FN2, KC_SPACE)
#define BS_FN1 LT(_FN1, KC_BSPC)
#define ET_FN2 LT(_FN2, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     _______,   KC_BSPC,
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_COLN,  KC_QUOT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_RSFT,  KC_ESC,
    KC_LGUI,  KC_LALT,  FN1,      _______,  SP_FN1,   ET_FN2,                       FN2,      _______,  KC_EQL,   KC_SLSH
  ),

  [_FN1] = LAYOUT(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  KC_DEL,
    RESET,    RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_VOLU,  _______,  _______,  _______,  _______,  KC_QUOT,  KC_SCLN,  _______,
    RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  KC_VOLD,  KC_LCBR,  KC_RCBR,  KC_1,     KC_LBRC,  KC_RBRC,  _______,  _______,
    RGB_TOG,  _______,  _______,  _______,  _______,  _______,                      _______,  KC_MINS,  KC_PLUS,  _______
  ),

  [_FN2] = LAYOUT(
    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,  KC_DEL,
    _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_COLN,  _______,
    _______,  _______,  _______,  KC_DEL,   KC_PGDN,  KC_END,   KC_CIRC,  KC_DLR,   KC_UNDS,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  KC_DEL,   _______,                      _______,  _______,  _______,  _______ 
  )
};

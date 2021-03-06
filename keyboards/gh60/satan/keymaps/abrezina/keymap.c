/*
Astrid Brezina 2020
*/
#include QMK_KEYBOARD_H


enum gh60_layers {
  _QWERTY,
  _FN,
};



#define FNL MO(_FN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap BASE: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Z|  U|  I|  O|  P|  Ü|  ]|  R  |
   * |-----------------------------------------------------------|
   * |FN     |  A|  S|  D|  F|  G|  H|  J|  K|  L|  Ö|  Ä| # | R |
   * |-----------------------------------------------------------|
   * |Shft| <>|  Y|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |Gui |FN  |Ctrl |
   * `-----------------------------------------------------------|
   */

  [_QWERTY] = LAYOUT_60_iso(
    KC_ESC,      KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,
    KC_TAB,      KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,
    FNL,         KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_NUHS, KC_ENT,
    KC_LSFT,     KC_NUBS,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,
    KC_LCTL,     KC_LGUI,  KC_LALT,                        KC_SPC,                                 KC_RALT,  KC_RGUI,  FNL,     KC_RCTL
  ),

  /* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * | ^°| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|    DEL|
   * |-----------------------------------------------------------|
   * |     |MB1|MSU|MB2|MWU|MUT|V-D|V-U| UP|PSC| SC|BRK|     |   |
   * |-----------------------------------------------------------|
   * |      |MSL|MSD|MSR|MWD|   |PGU|LFT|DWN|RGT|APP|INS|    |   |
   * |-----------------------------------------------------------|
   * |    |   |   |   |   |   |   |   |PGD|HOM|END|   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |RESET|   |
   * `-----------------------------------------------------------'
   */
  [_FN] = LAYOUT_60_iso(
    KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,
    _______,  KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, KC_MUTE, KC_VOLD, KC_VOLU, KC_UP,   KC_PSCR,  KC_SLCK, KC_PAUS, _______,
    _______  ,  KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RIGHT, KC_APP,  KC_INS , _______, _______,
    _______,  _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_HOME, KC_END,   _______, _______,
    _______,  _______, _______,                   _______,                                     _______,  _______, _______, _______
  ),
};
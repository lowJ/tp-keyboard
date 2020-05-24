#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _FL 1
#define _CL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */

[_BL] = LAYOUT(

KC_LSFT,KC_TAB,   KC_Y,   KC_F3,   KC_T, KC_F7, KC_RBRC,  KC_LBRC, KC_LGUI,KC_BSPC,KC_CAPS,
KC_N, KC_B, KC_SLSH, KC_RALT, KC_RIGHT,KC_LEFT,KC_DOWN, KC_SPC ,KC_PGDN,
KC_RSFT, KC_Z , KC_M, KC_C , KC_V,KC_DOT, KC_COMM,KC_RCTL, KC_ENT ,KC_PGUP, KC_X,
KC_A , KC_J,   KC_D ,   KC_F,  KC_L, KC_SCLN,  KC_K   ,KC_ENT, KC_BSLASH ,KC_ENT, KC_S,
KC_1, KC_7, KC_3, KC_4, KC_9, KC_0, KC_8, KC_F12, KC_DEL, KC_F11, KC_F10, KC_HOME, KC_2,
KC_Q, KC_U, KC_E, KC_R, KC_O, KC_P, KC_I, KC_W,
KC_GRAVE, KC_6, KC_F2, KC_5, KC_F8, KC_MINS,KC_EQL, KC_LCTL, KC_INS, KC_F9, KC_END, KC_F1,
KC_ESC, KC_H, KC_F4, KC_G, KC_QUOT, KC_F6, KC_LALT, KC_UP, KC_F5,
KC_BTN1, KC_BTN3, KC_BTN2)
};

// clang-format off
#include QMK_KEYBOARD_H
// #if __has_include("keymap.h")
// #    include "keymap.h"
// #endif

enum unicode_names {
    AE_LOWER, // ä
    AE_UPPER, // Ä
    OE_LOWER, // ö
    OE_UPPER, // Ö
    AA_LOWER, // å
    AA_UPPER, // Å
};

const uint32_t PROGMEM unicode_map[] = {
    [AE_LOWER] = 0x00E4, // ä
    [AE_UPPER] = 0x00C4, // Ä
    [OE_LOWER] = 0x00F6, // ö
    [OE_UPPER] = 0x00D6, // Ö
    [AA_LOWER] = 0x00E5, // å
    [AA_UPPER] = 0x00C5, // Å
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
//      0           1        2           3          4        5            ROW_R:   0          1        2          3       4        5
/* 0 */ KC_EQL,     KC_1,    KC_2,       KC_3,      KC_4,    KC_5,   /* | 6 */     KC_6,      KC_7,    KC_8,      KC_9,   KC_0,    KC_MINS,
/* 1 */ KC_TAB,     KC_Q,    KC_W,       KC_E,      KC_R,    KC_T,   /* | 7 */     KC_Y,      KC_U,    KC_I,      KC_O,   KC_P,    KC_BSLS,
/* 2 */ KC_ESC,     KC_A,    KC_S,       KC_D,      KC_F,    KC_G,   /* | 8 */     KC_H,      KC_J,    KC_K,      KC_L,   KC_SCLN, KC_QUOT,
/* 3 */ KC_LSFT,    KC_Z,    KC_X,       KC_C,      KC_V,    KC_B,   /* | 9 */     KC_N,      KC_M,    KC_COMM,   KC_DOT, KC_SLSH, KC_RSFT,
/* 4 */                      KC_LALT,    KC_GRV,    KC_DEL,  KC_BSPC,/* | 10 */    KC_SPC,    KC_ENT,  KC_LBRC,   KC_RBRC,
/* 5 */                      KC_END,     KC_LCTL,   KC_HOME, MO(1),  /* | 11 */    KC_LGUI,   KC_PGUP, KC_RCTL,   KC_PGDN
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, UP(AA_LOWER, AA_UPPER),
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, UP(OE_LOWER, OE_UPPER), UP(AE_LOWER, AE_UPPER),
        KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_PSCR, KC_BRID, KC_BRIU, KC_TRNS, QK_BOOT, KC_F12,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};


//     [0] = LAYOUT(
// //      0           1        2           3          4        5            ROW_R:   0          1        2          3       4        5
// /* 0 */ KC_EQL,     KC_1,    KC_2,       KC_3,      KC_4,    KC_5,   /* | 6 */     KC_6,      KC_7,    KC_8,      KC_9,   KC_0,    KC_MINS,
// /* 1 */ KC_TAB,     KC_Q,    KC_W,       KC_E,      KC_R,    KC_T,   /* | 7 */     KC_Y,      KC_U,    KC_I,      KC_O,   KC_P,    KC_BSLS,
// /* 2 */ KC_ESC,     KC_A,    KC_S,       KC_D,      KC_F,    KC_G,   /* | 8 */     KC_H,      KC_J,    KC_K,      KC_L,   KC_SCLN, KC_QUOT,
// /* 3 */ KC_LSFT,    KC_Z,    KC_X,       KC_C,      KC_V,    KC_B,   /* | 9 */     KC_N,      KC_M,    KC_COMM,   KC_DOT, KC_SLSH, KC_RSFT,
// /* 4 */ KC_NO,      KC_NO,   KC_LALT,    KC_GRV,    KC_DEL,  KC_BSPC,/* | 10 */    KC_SPC,    KC_ENT,  KC_LBRC,   KC_RBRC,KC_NO,   KC_NO,
// /* 5 */ KC_NO,      KC_NO,   KC_END,     KC_LCTL,   KC_HOME, MO(1),  /* | 11 */    KC_LGUI,   KC_PGUP, KC_RCTL,   KC_PGDN
//     ),
//     [1] = LAYOUT(
//         KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PSCR, KC_TRNS,
//         KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_BRID, KC_BRIU, KC_TRNS, QK_BOOT, KC_TRNS,
//         KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
//         KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
//     )

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C



void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  // debug_mouse=true;
}

#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _EMPTY 2
#define _NUMPAD 3
#define _CAPSLOCK 4
#define _SYMBOLS_RIGHT 5
#define _BRACKETS 6
#define _SYMBOLS_LEFT 7

// layering on mac is uses karabiner to accomadate defualt keyboard

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
			KC_GRV,         KC_1,          KC_2,          KC_3,         KC_4,          KC_5,  KC_6,    KC_7,         KC_8,            KC_9,            KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,   MO(1),
		    KC_TAB,         KC_Q,          KC_W,          KC_E,         KC_R,          KC_T,  KC_Y,    KC_U,         KC_I,            KC_O,            KC_P,            KC_LBRC,  KC_RBRC, KC_BSLS,   MO(2),
			LT(4, KC_CAPS), KC_A,          LT(5, KC_S),   LT(3, KC_D),  LT(6, KC_F),   KC_G,  KC_H,    KC_J,         KC_K,            KC_L,            LT(7, KC_SCLN),  KC_QUOT,           KC_ENT,    KC_PGUP,
		    KC_LSFT,        LCTL_T(KC_Z),  LSFT_T(KC_X),  LALT_T(KC_C), LGUI_T(KC_V),  KC_B,  KC_N,    LGUI_T(KC_M), LALT_T(KC_COMM), LSFT_T(KC_DOT),  LCTL_T(KC_SLSH), KC_RSFT,           KC_UP,     KC_PGDN,
		    KC_LCTL,        KC_LALT,       KC_LGUI,                     KC_SPC,                        KC_RGUI,      KC_RALT,                                           KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
			KC_TRNS,  KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_TRNS,
		    KC_TRNS,  RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SCRL,  KC_PAUS, QK_BOOT,  KC_TRNS,
			KC_TRNS,  RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EE_CLR,   KC_TRNS,
		    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_VOLU,  KC_MUTE,
		    KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS,          KC_TRNS,  KC_MPRV,          KC_VOLD,  KC_MNXT),
        [_EMPTY] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_NUMPAD] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_VOLU,  KC_BRIU, KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_VOLD,  KC_BRID, KC_PAST, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_0,    KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_CAPSLOCK] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,       KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,     C(S(KC_TAB)),  C(KC_TAB), KC_TRNS,   KC_TRNS, KC_BSPC, KC_DEL,  KC_TRNS, KC_PGUP, KC_HOME, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  A(KC_LEFT),  A(KC_RIGHT),   KC_TRNS,   KC_TRNS,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_PGDN, KC_END,           KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  G(KC_LBRC),  G(KC_RBRC),    KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                               KC_TRNS,                     KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_SYMBOLS_RIGHT] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_PIPE, KC_TILD, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_BRACKETS] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_LPRN, KC_LCBR, KC_LBRC, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_RPRN, KC_RCBR, KC_RBRC, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_SYMBOLS_LEFT] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_PERC,  KC_CIRC, KC_AMPR,  KC_ASTR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
};

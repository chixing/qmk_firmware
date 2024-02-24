#include QMK_KEYBOARD_H
#define _WINDOWS 0
#define _FKEYS_LIGHTING 1
#define _MAC 2
#define _NUMPAD 3
#define _CAPSLOCK 4
#define _SYMBOLS_RIGHT 5
#define _BRACKETS 6
#define _SYMBOLS_LEFT 7
#define _GAMING 8
#define _MOUSE 9

// this is the kbd keyboard (black clear bottom)

// layering on mac is uses karabiner to accomadate defualt keyboard

// base layer is mac with layer switching
// windows mode just switches alt and win
// game mode disables layers

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_WINDOWS] = LAYOUT_65_ansi_blocker( /* Base */
			LALT_T(KC_GRV), KC_1,          KC_2,          KC_3,         KC_4,          KC_5,           KC_6,        KC_7,         KC_8,            KC_9,            KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,   TG(2),
		    KC_TAB,         KC_Q,          KC_W,          KC_E,         KC_R,          KC_T,           KC_Y,        KC_U,         KC_I,            KC_O,            KC_P,            KC_LBRC,  KC_RBRC, KC_BSLS,   TO(8),
			LT(4, KC_ESC),  KC_A,          LT(5, KC_S),   LT(3, KC_D),  LT(6, KC_F),   LT(9, KC_G),    KC_H,        KC_J,         KC_K,            KC_L,            LT(7, KC_SCLN),  KC_QUOT,           KC_ENT,    KC_VOLU,
		    KC_LSFT,        LCTL_T(KC_Z),  LSFT_T(KC_X),  LALT_T(KC_C), LGUI_T(KC_V),  KC_B,           KC_N,        LGUI_T(KC_M), LALT_T(KC_COMM), LSFT_T(KC_DOT),  LCTL_T(KC_SLSH), KC_RSFT,           KC_UP,     KC_VOLD,
		    KC_LCTL,        KC_LGUI,       KC_LALT,                     KC_SPC,                        KC_RGUI,     MO(1),                                                           KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_FKEYS_LIGHTING] = LAYOUT_65_ansi_blocker( /* FN */
			QK_BOOT,  KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,        KC_TRNS,
		    KC_TRNS,  RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR,  KC_SCRL, KC_PAUS, KC_TRNS,       KC_TRNS,
			KC_TRNS,  RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EE_CLR,        KC_TRNS,
		    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          G(KC_TAB),     KC_MUTE,
		    KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS,          KC_TRNS,  C(G(KC_LEFT)),    C(A(KC_TAB)),  C(G(KC_RIGHT))),
        [_MAC] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_LALT,  KC_LGUI,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_NUMPAD] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_VOLU,  KC_BRIU, KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_VOLD,  KC_BRID, KC_PAST, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_0,    KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
        [_CAPSLOCK] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,       KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,     C(S(KC_TAB)),  C(KC_TAB), KC_TRNS,   KC_TRNS, KC_BSPC, KC_DEL,  KC_ENT,  KC_PGUP, KC_HOME, KC_TRNS, KC_TRNS,  KC_TRNS,
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
		[_GAMING] = LAYOUT_65_ansi_blocker( /* Base */
			KC_GRV,         KC_1,          KC_2,          KC_3,         KC_4,          KC_5,  KC_6,    KC_7,         KC_8,            KC_9,            KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,   KC_ESC,
		    KC_TAB,         KC_Q,          KC_W,          KC_E,         KC_R,          KC_T,  KC_Y,    KC_U,         KC_I,            KC_O,            KC_P,            KC_LBRC,  KC_RBRC, KC_BSLS,   TO(0),
			KC_CAPS,        KC_A,          KC_S,          KC_D,         KC_F,          KC_G,  KC_H,    KC_J,         KC_K,            KC_L,            KC_SCLN,         KC_QUOT,           KC_ENT,    KC_VOLU,
		    KC_LSFT,        KC_Z,          KC_X,          KC_C,         KC_V,          KC_B,  KC_N,    KC_M,         KC_COMM,         KC_DOT,          KC_SLSH,         KC_RSFT,           KC_UP,     KC_VOLD,
		    KC_LCTL,        KC_LGUI,       KC_LALT,                     KC_SPC,                        KC_RGUI,      KC_RCTL,                                           KC_LEFT,           KC_DOWN,   KC_RIGHT),
        [_MOUSE] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_ACL0,  KC_ACL1, KC_ACL2,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
};


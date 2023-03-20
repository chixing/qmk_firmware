#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

// layering on mac is uses karabiner to accomadate defualt keyboard

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
			KC_GRV,        KC_1,          KC_2,          KC_3,         KC_4,          KC_5,  KC_6,    KC_7,         KC_8,            KC_9,            KC_0,            KC_MINS,  KC_EQL,  KC_BSPC,   MO(1),
		    KC_TAB,        KC_Q,          KC_W,          KC_E,         KC_R,          KC_T,  KC_Y,    KC_U,         KC_I,            KC_O,            KC_P,            KC_LBRC,  KC_RBRC, KC_BSLS,   MO(2),
			KC_CAPS,       KC_A,          KC_S,          KC_D,         KC_F,          KC_G,  KC_H,    KC_J,         KC_K,            KC_L,            KC_SCLN,         KC_QUOT,           KC_ENT,    KC_PGUP,
		    KC_LSFT,       LCTL_T(KC_Z),  LSFT_T(KC_X),  LALT_T(KC_C), LGUI_T(KC_V),  KC_B,  KC_N,    LGUI_T(KC_M), LALT_T(KC_COMM), LSFT_T(KC_DOT),  LCTL_T(KC_SLSH), KC_RSFT,           KC_UP,     KC_PGDN,
		    KC_LCTL,       KC_LALT,       KC_LGUI,                     KC_SPC,                        KC_RGUI,      KC_RALT,                                           KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
			KC_TRNS,  KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_TRNS,
		    KC_TRNS,  RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_PSCR, KC_SCRL,  KC_PAUS, QK_BOOT,  KC_TRNS,
			KC_TRNS,  RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          EE_CLR,   KC_TRNS,
		    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_VOLU,  KC_MUTE,
		    KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS,          KC_TRNS,  KC_MPRV,          KC_VOLD,  KC_MNXT),
        [_LAYER2] = LAYOUT_65_ansi_blocker(
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS,
            KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,  KC_TRNS),
};

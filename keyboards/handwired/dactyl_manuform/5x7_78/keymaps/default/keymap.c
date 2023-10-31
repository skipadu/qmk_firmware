#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _COLEMAK,
    _FN,
};

#define CTL_BS  LCTL_T(KC_LBRC) // Square brackets start [
#define CTL_BE  RCTL_T(KC_RBRC) // Square brackets end   ]

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
            QK_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   ,                          KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC,
            KC_MUTE, KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
            KC_VOLU, KC_ESC , KC_A   , KC_S  ,  KC_D   , KC_F   , KC_G   ,                          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_BSLS,
            KC_VOLD, KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, TO(_COLEMAK),
            KC_LCTL, KC_LOPT, KC_LGUI, KC_MPLY, KC_MFFD,   KC_LGUI, KC_SPC ,                     KC_ENT , KC_BSPC   , KC_RGUI, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT,
                                                                SC_LSPO, KC_TAB ,          KC_RGUI, SC_RSPC ,         
                                                                MO(_FN), CTL_BS ,          CTL_BE , KC_DEL 
                                                                                        
    ),

    [_COLEMAK] = LAYOUT(
            _______, _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______ , _______, _______,
            _______, _______, KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                          KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN , _______, _______,
            _______, _______, KC_A   , KC_R  ,  KC_S   , KC_T   , KC_G   ,                          KC_M   , KC_N   , KC_E   , KC_I   , KC_O    , _______, _______,
            _______, _______, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,                          KC_K   , KC_H   , _______, _______, _______ , _______, TO(_QWERTY),
            _______, _______, _______, _______, _______,   _______, _______,                     _______, _______   , _______, _______, _______ , _______, _______,
                                                                _______,  _______,          _______, _______,         
                                                                MO(_FN) , _______,          _______, _______
                                                                                        
    ),

    [_FN] = LAYOUT(
            XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,                          KC_F7  , KC_F8  , KC_F9  , KC_F10 , XXXXXXX, XXXXXXX, XXXXXXX,
            XXXXXXX, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
            XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
            XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
                                                                XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX,
                                                                _______, XXXXXXX,           XXXXXXX, XXXXXXX
    ),
};

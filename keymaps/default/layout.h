#ifndef LAYOUT_H
#define LAYOUT_H

// Layout
#define BASE_LAYER \
    TOP_A  ,  TOP_B  ,  TOP_C  ,  TOP_D  ,  TOP_E  ,  TOP_F  ,  TOP_G  ,  TOP_H  ,  TOP_I  ,  TOP_J  ,  TOP_K  ,  TOP_M  ,  TOP_N  ,  TO_RSOP, \
    TO_LTOP,  KC_QUOT,  KC_COMM,  KC_DOT ,  KC_P   ,  KC_Y   ,  HY_TOGG,  KC_F   ,  KC_G   ,  KC_C   ,  KC_H   ,  KC_L   ,  KC_SLSH,  TO_RTOP, \
    TO_LMID,  KC_A   ,  KC_O   ,  KC_E   ,  KC_U   ,  KC_I   ,  XP_MTOP,  KC_D   ,  KC_R   ,  KC_T   ,  KC_N   ,  KC_S   ,            TO_RMID, \
    TO_LBOT,  KC_Q   ,  KC_J   ,  KC_X   ,  KC_K   ,  KC_MINS,            KC_Z   ,  KC_B   ,  KC_M   ,  KC_W   ,  KC_V   ,            TO_RBOT, \
    HY_LTOP,  HY_LMID,  HY_LBOT,                                HY_CENT,                                HY_RBOT,  HY_RMID,  HY_RTOP,  QWERTYS  \

#define QWERTY_LAYER \
    KC_GRV ,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  KC_6  ,   KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  KC_SLSH,  KC_EQL ,  _______, \
    KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y  ,   KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  KC_LBRC,  KC_RBRC,  _______, \
    KC_ESC ,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_L   ,  KC_SCLN,  KC_QUOT,            _______, \
    KC_LSFT,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_V   ,  KC_B   ,            KC_N   ,  KC_M   ,  KC_COMM,  KC_DOT ,  KC_SLSH,            KC_BSPC, \
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_LCTL,  KC_RALT,  KC_RGUI,  QWERTYS  \

#define PASS_LAYER \
    _______,  PASS_A ,  PASS_B ,  PASS_C ,  PASS_D ,  PASS_E ,  XXXXXXX,  MAIL_A ,  MAIL_B ,  MAIL_C ,  MAIL_D ,  MAIL_E ,  XXXXXXX,  _______, \
    _______,  PASS_F ,  PASS_G ,  PASS_H ,  PASS_I ,  PASS_J ,  XXXXXXX,  MASS_A ,  MASS_B ,  MASS_C ,  MASS_D ,  MASS_E ,  XXXXXXX,  _______, \
    _______,  PASS_K ,  PASS_M ,  PASS_N ,  PASS_O ,  PASS_P ,  _______,  MAIL_F ,  MAIL_G ,  MAIL_H ,  MAIL_I ,  MAIL_J ,            _______, \
    _______,  PASS_Q ,  PASS_R ,  PASS_S ,  PASS_T ,  PASS_U ,            MASS_F ,  MASS_G ,  MASS_H ,  MASS_I ,  MASS_J ,            _______, \
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______  \


// Both Layout
#define MOUSE_LAYER \
    _______,  XXXXXXX,  MS_WHLL,  MS_WHLR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT, \
    _______,  MS_WHLU,  MS_BTN1,  MS_UP  ,  MS_BTN2,  CT_PGUP,  XXXXXXX,  XXXXXXX,  KC_COLN,  KC_LPRN,  KC_RPRN,  KC_EQL ,  XXXXXXX,  _______, \
    _______,  MS_WHLD,  MS_LEFT,  MS_DOWN,  MS_RGHT,  CT_PGDN,  XXXXXXX,  XXXXXXX,  KC_LCBR,  KC_LBRC,  KC_RBRC,  KC_RCBR,            _______, \
    _______,  XXXXXXX,  A_LEFT ,  A_RIGHT,  MS_BTN3,  XXXXXXX,            XXXXXXX,  KC_TILD,  KC_SCLN,  KC_GRV,   KC_QUES,            _______, \
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______  \

#define NUMFN_LAYER \
    _______,  KC_1   ,  KC_2   ,  KC_3   ,  KC_PDOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,  KC_F12 , \
    _______,  KC_4   ,  KC_5   ,  KC_6   ,  KC_0   ,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_F5  ,  KC_F6  ,  KC_F7  ,  KC_F8  ,  _______, \
    _______,  KC_7   ,  KC_8   ,  KC_9   ,  KC_EQL ,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_F9  ,  KC_F10 ,  KC_F11 ,            _______, \
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            _______, \
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______  \


// Left Layout
#define ARROW_LAYER \
    _______,  XXXXXXX,  MS_WHLL,  MS_WHLR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  QK_BOOT, \
    _______,  MS_WHLU,  KC_HOME,  KC_UP  ,  KC_END,   CT_PGUP,  XXXXXXX,  KC_MINS,  KC_1   ,  KC_2   ,  KC_3   ,  KC_PDOT,  XXXXXXX,  _______, \
    _______,  MS_WHLD,  KC_LEFT,  KC_DOWN,  KC_RGHT,  CT_PGDN,  XXXXXXX,  KC_PLUS,  KC_4   ,  KC_5   ,  KC_6   ,  KC_0   ,            _______, \
    _______,  XXXXXXX,  A_LEFT ,  A_RIGHT,  MS_BTN3,  XXXXXXX,            XXXXXXX,  KC_ASTR,  KC_7   ,  KC_8   ,  KC_9   ,            _______, \
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______  \


// Rigth Layout
#define SUB_LAYER \
    _______,  XXXXXXX,  RM_PREV,  RM_NEXT,  RM_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______, \
    _______,  RM_SPDU,  RM_SPDD,  RM_VALD,  RM_VALU,  KC_NUM ,  XXXXXXX,  XXXXXXX,  XXXXXXX,  CT_PGUP,  KC_PSCR,  KC_HOME,  KC_END ,  _______, \
    _______,  KC_F13 ,  KC_F14 ,  KC_F15 ,  KC_F16 ,  KC_CAPS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  CT_PGDN,  KC_PGUP,  KC_PGDN,            _______, \
    _______,  KC_F17 ,  KC_F18 ,  KC_F19 ,  KC_F20 ,  XXXXXXX,            XXXXXXX,  XXXXXXX,  _______,  KC_INS ,  KC_DEL ,            _______, \
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______  \


#endif

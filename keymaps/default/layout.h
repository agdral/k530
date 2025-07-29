#ifndef LAYOUT_H
#define LAYOUT_H

#define BASE_LAYER { \
  { CT_X   ,  CT_C   ,  CT_V   ,  CT_Z   ,  CT_Y   ,  CT_S   ,  KC_MPRV,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY,  KC_MUTE,  KC_MSTP,  TO_RSOP, }, \
  { TO_LTOP,  KC_Z   ,  KC_COMM,  KC_DOT ,  KC_P   ,  KC_Y   ,  KC_QUOT,  KC_F   ,  KC_G   ,  KC_C   ,  KC_H   ,  KC_L   ,  KC_SLSH,  TO_RTOP, }, \
  { TO_LMID,  KC_A   ,  KC_O   ,  KC_E   ,  KC_U   ,  KC_I   ,  XP_MTOP,  KC_D   ,  KC_R   ,  KC_T   ,  KC_N   ,  KC_S   ,  XXXXXXX,  TO_RMID, }, \
  { TO_LBOT,  XXXXXXX,  KC_Q   ,  KC_J   ,  KC_X   ,  KC_K   ,  KC_LBRC,  KC_RBRC,  KC_B   ,  KC_M   ,  KC_W   ,  KC_V   ,  XXXXXXX,  TO_RBOT, }, \
  { HY_LTOP,  HY_LMID,  HY_LBOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  HY_CENT,  XXXXXXX,  XXXXXXX,  HY_RBOT,  HY_RMID,  XXXXXXX,  HY_RTOP,  QWERTYS, }, \
}

#define SUPA_LAYER { \
  { KC_GRV ,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,  KC_EQL,   _______, }, \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
}

#define QWERTY_LAYER { \
  { KC_GRV ,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  KC_6  ,   KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  KC_SLSH,  KC_EQL ,  _______, }, \
  { KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y  ,   KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  KC_LBRC,  KC_RBRC,  _______, }, \
  { KC_ESC ,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H  ,   KC_J   ,  KC_K   ,  KC_L   ,  KC_SCLN,  KC_QUOT,  XXXXXXX,  _______, }, \
  { KC_LSFT,  XXXXXXX,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_V   ,  KC_B  ,   KC_N   ,  KC_M   ,  KC_COMM,  KC_DOT ,  KC_SLSH,  XXXXXXX,  KC_BSPC, }, \
  { KC_LCTL,  KC_LGUI,  KC_LALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SPC,   XXXXXXX,  XXXXXXX,  KC_LCTL,  KC_RALT,  XXXXXXX,  KC_RGUI,  QWERTYS, }, \
}

#define PASS_LAYER { \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
  { _______,  P_1    ,  P_2    ,  P_3    ,  P_4    ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
  { _______,  P_5    ,  P_6    ,  P_7    ,  P_8    ,  _______,  _______,  Mail_1 ,  Mail_2 ,  Mail_3 ,  Mail_4 ,  Mail_5 ,  _______,  _______, }, \
  { _______,  _______,  Ip_1   ,  Ip_2   ,  Ip_3   ,  _______,  _______,  Pass_1 ,  Pass_2 ,  Pass_3 ,  Pass_4 ,  Pass_6 ,  _______,  _______, }, \
  { _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, }, \
}

#endif

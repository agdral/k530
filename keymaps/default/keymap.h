#ifndef KEYMAP_H
#define KEYMAP_H

#include QMK_KEYBOARD_H
#include "../../variables.h"

// Layer Temporal
#define TA_FNC LT(_FNC,KC_ENT)
#define TO_SYM LT(_SYM,KC_MINS)
#define TO_FN LT(_FN,KC_BSPC)
#define TO_CON LT(_CON,KC_ESC)
#define TO_PASS LT(_PASS,KC_TAB)
#define TM_MUG LT(_MUD,KC_SPC)
#define TM_MUA LT(_MUD,KC_LALT)
#define TM_MUC LT(_MUD,KC_CAPS)
#define TM_MUCS LT(_MUD,KC_F21)

// Layer Switch
#define QWERT TG(_QWER)
#define CONT TG(_CON)

// One shot
// #define HYPR_L OSM(MOD_LGUI | MOD_LALT)
// #define HYPR_R OSM(MOD_LGUI | MOD_LCTL)
// #define HYPR_O OSM(MOD_LGUI | MOD_LCTL | MOD_LALT)
#define HYPR_L LT(_MUD, KC_F22)
#define HYPR_R LT(_MUD, KC_F23)
#define HYPR_O LT(_MUD, KC_F24)

// Modifier key
#define A_RIGHT A(KC_RIGHT)
#define A_LEFT A(KC_LEFT)
#define C_V  C(KC_V)
#define C_W  C(KC_W)
#define C_A  C(KC_A)
#define C_X  C(KC_X)
#define C_C  C(KC_C)
#define C_S  C(KC_S)
#define C_Y  C(KC_Y)
#define C_Z  C(KC_Z)
#define C_PRIOR C(KC_PGUP)
#define C_NEXT C(KC_PGDN)


#define CS_V  RCS(KC_V)
#define CS_A  RCS(KC_A)
#define CS_X  RCS(KC_X)
#define CS_C  RCS(KC_C)
#define CS_S  RCS(KC_S)
#define CS_Y  RCS(KC_Y)
#define CS_Z  RCS(KC_Z)

#define S_MPRV  S(KC_MPRV)
#define S_MNXT  S(KC_MNXT)
#define S_VOLD  S(KC_VOLD)
#define S_VOLU  S(KC_VOLU)
#define S_MPLY  S(KC_MPLY)
#define S_MUTE  S(KC_MUTE)
#define S_MSTP  S(KC_MSTP)

// Custom OneShot
// #define L_NAV   MO(_NAV)
// #define L_SYM   MO(_SYM)

// Modifier Layer
#define ST_KC SFT_T(KC_DEL)
#define ST_BSLS SFT_T(KC_BSLS)
#define C_SCLN LCTL_T(KC_SCLN)

#endif

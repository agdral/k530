#ifndef KEYMAP_H
#define KEYMAP_H

#include QMK_KEYBOARD_H
#define bool _Bool
#define true 1
#define false 0

#define MY_LAYOUT(...) LAYOUT_60_ansi(__VA_ARGS__)
// Uniques
#define QWERTYS TG(_QWER)

// Lateral Layer
#define TO_LTOP LT(_LTOP, KC_TAB)
#define TO_LMID LT(_LMID, KC_ESC)
#define TO_LBOT LT(_LBOT, KC_DEL)

#define TO_RSOP OSM(MOD_RALT)
#define TO_RTOP LT(_RTOP, KC_BSLS)
#define TO_RMID LT(_RMID, KC_ENT)
#define TO_RBOT LT(_RBOT, KC_BSPC)

// Mid layer
#define XP_MTOP OSL(_PASS)

// Bottom Modifier
#define HY_LTOP LT(_SUPA, KC_F23)
#define HY_LMID LT(_SUPA, KC_F22)
#define HY_LBOT OSM(MOD_LCTL)
#define HY_CENT LT(_SUPA, KC_SPC)
#define HY_RBOT OSM(MOD_LSFT)
#define HY_RMID LT(_SUPA, KC_F21)
#define HY_RTOP LT(_SUPA, KC_F20)

// Modifier key
#define A_RIGHT A(KC_RIGHT)
#define A_LEFT A(KC_LEFT)

#define CT_V C(KC_V)
#define CT_W C(KC_W)
#define CT_A C(KC_A)
#define CT_X C(KC_X)
#define CT_C C(KC_C)
#define CT_S C(KC_S)
#define CT_Y C(KC_Y)
#define CT_Z C(KC_Z)
#define CT_PGUP C(KC_PGUP)
#define CT_PGDN C(KC_PGDN)

// Symbols
#define SH_SCLN S(KC_SCLN)
#define SH_COMM S(KC_COMM)
#define SH_DOT S(KC_DOT)
#define SH_LBRC S(KC_LBRC)
#define SH_RBRC S(KC_RBRC)
#define SH_0 S(KC_0)
#define SH_9 S(KC_9)

#endif

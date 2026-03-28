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
#define HY_LTOP MT(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_F23)
#define HY_LMID MT(MOD_LGUI | MOD_LCTL, KC_F22)
#define HY_LBOT OSM(MOD_LCTL)
#define HY_CENT MT(MOD_LGUI, KC_SPC)
#define HY_RBOT OSM(MOD_LSFT)
#define HY_RMID MT(MOD_LGUI | MOD_LALT, KC_F21)
#define HY_RTOP MT(MOD_LALT, KC_F20)

// Modifier key
#define A_RIGHT A(KC_RIGHT)
#define A_LEFT A(KC_LEFT)
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

#define CUSTOM_TOP             \
    X(TOP_A, C(KC_X), KC_GRV)  \
    X(TOP_B, C(KC_C), KC_1)    \
    X(TOP_C, C(KC_V), KC_2)    \
    X(TOP_D, C(KC_Z), KC_3)    \
    X(TOP_E, C(KC_Y), KC_4)    \
    X(TOP_F, C(KC_S), KC_5)    \
    X(TOP_G, KC_MPRV, KC_6)    \
    X(TOP_H, KC_MNXT, KC_7)    \
    X(TOP_I, KC_VOLD, KC_8)    \
    X(TOP_J, KC_VOLU, KC_9)    \
    X(TOP_K, KC_VOLU, KC_0)    \
    X(TOP_M, KC_VOLU, KC_BSLS) \
    X(TOP_N, KC_VOLU, KC_EQL)

typedef struct {
    uint16_t keycode;
    uint16_t normal_key;
    uint16_t mod_key;
} custom_top_t;

#define CUSTOM_TOP_COUNT 13

#endif

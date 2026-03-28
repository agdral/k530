#include "keymap.h"
#include "layout.h"
#include "../variables.h"

enum custom_keycodes {
    TEST = SAFE_RANGE,

    #define X(name, normal, meta) name,
    CUSTOM_TOP
    #undef X

    #define X(name, normal) name,
    CUSTOM_VAR
    #undef X
};

static const custom_top_t custom_top[] = {
    #define X(name, normal, meta) { name, normal, meta },
    CUSTOM_TOP
    #undef X
};

static const custom_var_t custom_var[] = {
    #define X(name, normal) { name, normal },
    CUSTOM_VAR
    #undef X
};


enum layer_names {
    // layout
    _BASE, _PASS, _QWER,
    // lateral left
    _LTOP, _LMID, _LBOT,
    // lateral right
    _RTOP, _RMID, _RBOT,
};

static bool send_oracion(keyrecord_t *record, const char *my_str) {
    if (record->event.pressed) {
        send_string(my_str);
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    for (uint8_t i = 0; i < CUSTOM_VAR_COUNT; i++) {
        if (keycode == custom_var[i].keycode) {
            return send_oracion(record, custom_var[i].normal_key);
        }
    }

    for (uint8_t i = 0; i < CUSTOM_TOP_COUNT; i++) {
        if (keycode == custom_top[i].keycode) {
            if (!record->event.pressed) return false;
            uint8_t mods = get_mods();
            if (mods) { 
                tap_code16(custom_top[i].mod_key);
            } else {
                tap_code16(custom_top[i].normal_key);
            }
            return false;
        }
    }

    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // layout
    [_BASE] = MY_LAYOUT(BASE_LAYER), 
    [_PASS] = MY_LAYOUT(PASS_LAYER),
    [_QWER] = MY_LAYOUT(QWERTY_LAYER),
    // lateral left
    [_LTOP] = MY_LAYOUT(NUMFN_LAYER), 
    [_LMID] = MY_LAYOUT(ARROW_LAYER),
    [_LBOT] = MY_LAYOUT(MOUSE_LAYER),
    // lateral right
    [_RTOP] = MY_LAYOUT(NUMFN_LAYER), 
    [_RMID] = MY_LAYOUT(SUB_LAYER), 
    [_RBOT] = MY_LAYOUT(MOUSE_LAYER)
};

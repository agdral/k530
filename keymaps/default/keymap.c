#include "keymap.h"
#include "lateral.h"
#include "layout.h"
#include "variables.h"

enum custom_keycodes {
    // Password
    P_1 = SAFE_RANGE,
    P_2, P_3, P_4, P_5, P_6, P_7, P_8,
    // Mails
    Mail_1, Mail_2, Mail_3, Mail_4, Mail_5,
    // Password
    Pass_1, Pass_2, Pass_3, Pass_4, Pass_5,
    // Ip
    Ip_1, Ip_2, Ip_3,
};

enum layer_names {
    // layout
    _BASE, _SUPA, _PASS, _QWER,
    // lateral left
    _LTOP, _LMID, _LBOT,
    // lateral right
    _RTOP, _RMID, _RBOT,
};

static bool send_oracion_enter(keyrecord_t *record, const char *my_str) {
    if (record->event.pressed) {
        send_string(my_str);
        SEND_STRING(SS_TAP(X_ENT));
    }
    return false;
}

static bool send_oracion(keyrecord_t *record, const char *my_str) {
    if (record->event.pressed) {
        send_string(my_str);
    }
    return false;
}

static bool layer_mod_kc(keyrecord_t *record, int modifs) {
    if (record->tap.count == 0) {
        if (record->event.pressed) {
            register_mods(modifs);
        } else {
            unregister_mods(modifs);
        }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case P_1: return send_oracion_enter(record, V_P_1);
        case P_2: return send_oracion_enter(record, V_P_2);
        case P_3: return send_oracion_enter(record, V_P_3);
        case P_4: return send_oracion_enter(record, V_P_4);
        case P_5: return send_oracion_enter(record, V_P_5);
        case P_6: return send_oracion_enter(record, V_P_6);
        case P_7: return send_oracion_enter(record, V_P_6);
        case P_8: return send_oracion_enter(record, V_P_6);
        case Mail_1: return send_oracion(record, V_Mail_1);
        case Mail_2: return send_oracion(record, V_Mail_2);
        case Mail_3: return send_oracion(record, V_Mail_3);
        case Mail_4: return send_oracion(record, V_Mail_4);
        case Mail_5: return send_oracion(record, V_Mail_5);
        case Pass_1: return send_oracion(record, V_Mail_C1);
        case Pass_2: return send_oracion(record, V_Mail_C2);
        case Pass_3: return send_oracion(record, V_Mail_C3);
        case Pass_4: return send_oracion(record, V_Mail_C4);
        case Pass_5: return send_oracion(record, V_Mail_C5);
        case Ip_1: return send_oracion(record, V_IP_1);
        case Ip_2: return send_oracion(record, V_IP_2);
        case Ip_3: return send_oracion(record, V_IP_3);
        case HY_LTOP: return layer_mod_kc(record, MOD_LALT | MOD_LCTL | MOD_LGUI);
        case HY_LMID: return layer_mod_kc(record, MOD_LGUI | MOD_LCTL);
        case HY_CENT: return layer_mod_kc(record, MOD_LGUI);
        case HY_RMID: return layer_mod_kc(record, MOD_LGUI | MOD_LALT);
        case HY_RTOP: return layer_mod_kc(record, MOD_LALT);
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // layout
    [_BASE] = MY_LAYOUT(BASE_LAYER), 
    [_SUPA] = MY_LAYOUT(SUPA_LAYER), 
    [_PASS] = MY_LAYOUT(PASS_LAYER),
    [_QWER] = MY_LAYOUT(QWERTY_LAYER),
    // lateral left
    [_LTOP] = MY_LAYOUT(NUM_LAYER), 
    [_LMID] = MY_LAYOUT(ARROW_LAYER),
    [_LBOT] = MY_LAYOUT(MOUSE_LAYER),
    // lateral right
    [_RTOP] = MY_LAYOUT(FN_NORMAL), 
    [_RMID] = MY_LAYOUT(SUB_LAYER), 
    [_RBOT] = MY_LAYOUT(FN_EXTENT)
};

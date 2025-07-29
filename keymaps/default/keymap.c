#include "keymap.h"
#include "lateral.h"
#include "layout.h"

void matrix_init_user(void) { rgb_matrix_mode(RGB_MATRIX_PIXEL_RAIN); };

enum custom_keycodes {
	P_1 = SAFE_RANGE,
  P_2,P_3,P_4,P_5,P_6,P_7,P_8,
  Mail_1,Mail_2,Mail_3,Mail_4,Mail_5,
  Pass_1,Pass_2,Pass_3,Pass_4,Pass_5,
  Ip_1,Ip_2,Ip_3,
};

enum layer_names {
  // layout
	_BASE,_SUPA,_PASS,_QWER,
  //lateral
  _LTOP,_LMID,_LBOT,
  _RTOP,_RMID,_RBOT,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	bool send_oracion_enter(const char *my_str) {
		if (record->event.pressed) {
			send_string(my_str);
			SEND_STRING(SS_TAP(X_ENT));
		}
		return false;
	}
	bool send_oracion(const char *my_str) {
		if (record->event.pressed) {
			send_string(my_str);
		}
		return false;
	}

	bool layer_mod_kc(int modifs) {
		if (record->tap.count == 0) {
			if (record->event.pressed) {
				register_mods(modifs);
			} else {
				unregister_mods(modifs);
			}
		}
		return true;
	}

	switch (keycode) {
	case P_1: return send_oracion_enter(V_P_1);
	case P_2:	return send_oracion_enter(V_P_2);
	case P_3:	return send_oracion_enter(V_P_3);
	case P_4:	return send_oracion_enter(V_P_4);
	case P_5:	return send_oracion_enter(V_P_5);
	case P_6:	return send_oracion_enter(V_P_6);
	case P_7:	return send_oracion_enter(G_C1);
	case P_8:	return send_oracion_enter(G_C2);
	case Mail_1: return send_oracion(V_Mail_1);
	case Mail_2: return send_oracion(V_Mail_2);
	case Mail_3: return send_oracion(V_Mail_3);
	case Mail_4: return send_oracion(V_Mail_4);
	case Mail_5: return send_oracion(V_Mail_5);
	case Pass_1: return send_oracion(V_Mail_C1);
	case Pass_2: return send_oracion(V_Mail_C2);
	case Pass_3: return send_oracion(V_Mail_C3);
	case Pass_4: return send_oracion(V_Mail_C4);
	case Pass_5: return send_oracion(V_Mail_C5);
	case Ip_1: return send_oracion(V_IP_1);
	case Ip_2: return send_oracion(V_IP_2);
	case Ip_3: return send_oracion(V_IP_3);
	case HY_LTOP:	return layer_mod_kc(MOD_LALT|MOD_LCTL|MOD_LGUI);
	case HY_LMID:	return layer_mod_kc(MOD_LGUI|MOD_LCTL);
	case HY_CENT:	return layer_mod_kc(MOD_LGUI);
	case HY_RMID:	return layer_mod_kc(MOD_LGUI|MOD_LALT);
	case HY_RTOP:	return layer_mod_kc(MOD_LALT);
	}
	return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // layout
		[_BASE] = BASE_LAYER,		[_SUPA] = SUPA_LAYER,		 
		[_PASS] = PASS_LAYER,		[_QWER] = QWERTY_LAYER, 
    // lateral
    [_LTOP] = NUM_LAYER,  	[_LMID] = ARROW_LAYER,    [_LBOT] = MOUSE_LAYER,
		[_RTOP] = FN_NORMAL,    [_RMID] = SUB_LAYER,			[_RBOT] = FN_EXTENT,
};

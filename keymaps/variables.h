#ifndef VARIABLES_H
#define VARIABLES_H

#include QMK_KEYBOARD_H

#define CUSTOM_VAR                                                             \
  X(PASS_A, "")                                                                \
  X(PASS_B, "")                                                                \
  X(PASS_C, "")                                                                \
  X(PASS_D, "")                                                                \
  X(PASS_E, "")                                                                \
  X(PASS_F, "")                                                                \
  X(PASS_G, "")                                                                \
  X(PASS_H, "")                                                                \
  X(PASS_I, "")                                                                \
  X(PASS_J, "")                                                                \
  X(PASS_K, "")                                                                \
  X(PASS_M, "")                                                                \
  X(PASS_N, "")                                                                \
  X(PASS_O, "")                                                                \
  X(PASS_P, "")                                                                \
  X(PASS_Q, "")                                                                \
  X(PASS_R, "")                                                                \
  X(PASS_S, "")                                                                \
  X(PASS_T, "")                                                                \
  X(PASS_U, "")                                                                \
  X(MAIL_A, "")                                                                \
  X(MASS_A, "")                                                                \
  X(MAIL_B, "")                                                                \
  X(MASS_B, "")                                                                \
  X(MAIL_C, "")                                                                \
  X(MASS_C, "")                                                                \
  X(MAIL_D, "")                                                                \
  X(MASS_D, "")                                                                \
  X(MAIL_E, "")                                                                \
  X(MASS_E, "")                                                                \
  X(MAIL_F, "")                                                                \
  X(MASS_F, "")                                                                \
  X(MAIL_G, "")                                                                \
  X(MASS_G, "")                                                                \
  X(MAIL_H, "")                                                                \
  X(MASS_H, "")                                                                \
  X(MAIL_I, "")                                                                \
  X(MASS_I, "")                                                                \
  X(MAIL_J, "")                                                                \
  X(MASS_J, "")

typedef struct {
  uint16_t keycode;
  const char *normal_key;
} custom_var_t;

#define CUSTOM_VAR_COUNT 40

#endif

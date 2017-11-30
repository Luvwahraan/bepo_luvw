#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_tap_dance.h"


// F
void td_Fall_finished(qk_tap_dance_state_t *state, const uint8_t _kc, const uint8_t _kcF)
{
  switch (state->count)
  {
    case 1: register_code(_kc); break;
    case 2: register_code(_kcF); break;
    case 3: register_code(KC_LALT); register_code(_kcF); break;
    case 4: register_code(KC_LCTRL); register_code(_kcF); break;
    default: register_code(_kc); break;
  }
}
void td_Fall_reset(qk_tap_dance_state_t *state, const uint8_t _kc, const uint8_t _kcF)
{
  switch (state->count)
  {
    case 1: unregister_code(_kc); break;
    case 2: unregister_code(_kcF); break;
    case 3: unregister_code(KC_LALT); unregister_code(_kcF); break;
    case 4: unregister_code(KC_LCTRL); unregister_code(_kcF); break;
    default: unregister_code(_kc); break;
  }
}
void td_F9_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_SLASH, KC_F9); }
void td_F9_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_SLASH, KC_F9); }

void td_F2_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_LGIL, KC_F2); }
void td_F2_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_LGIL, KC_F2); }

void td_F7_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_PLUS, KC_F7); }
void td_F7_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_PLUS, KC_F7); }

void td_F6_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_AT, KC_F6); }
void td_F6_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_AT, KC_F6); }

void td_F4_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_LPRN, KC_F4); }
void td_F4_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_LPRN, KC_F4); }

void td_F8_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_MINUS, KC_F8); }
void td_F8_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_MINUS, KC_F8); }

void td_F1_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_DQOT, KC_F1); }
void td_F1_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_DQOT, KC_F1); }

void td_F3_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_RGIL, KC_F3); }
void td_F3_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_RGIL, KC_F3); }

void td_F5_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_RPRN, KC_F5); }
void td_F5_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_RPRN, KC_F5); }

void td_F10_finished(qk_tap_dance_state_t *state, void *user_data) { td_Fall_finished(state, BP_ASTR, KC_F10); }
void td_F10_reset(qk_tap_dance_state_t *state, void *user_data)    { td_Fall_reset(state, BP_ASTR, KC_F10); }
// end F



// Super/GUI keys
void td_super_finished(qk_tap_dance_state_t *state, void *user_data)
{
  // single and double possible, so 4 possibilities
  switch (check_tap_state(state))
  {
    case SINGLE_TD: register_code(KC_RGUI); break;               // single hold
    case (TAPPED_TD | SINGLE_TD): register_code(KC_LGUI); break; // single tap
    case DOUBLE_TD: register_code(KC_LALT | KC_LSHIFT); break;   // double hold
    case (TAPPED_TD | DOUBLE_TD): layer_or(U32(FNCT)); break;    // double tap
  }
}
void td_super_reset(qk_tap_dance_state_t *state, void *user_data){
  switch (check_tap_state(state))
  {
    case SINGLE_TD: unregister_code(KC_RGUI); break;
    case (TAPPED_TD | SINGLE_TD): unregister_code(KC_LGUI); break;
    case DOUBLE_TD: unregister_code(KC_LALT | KC_LSHIFT); break;
    case (TAPPED_TD | DOUBLE_TD): layer_xor(U32(FNCT)); break;
  }
}

/* LCTRL & RCTRL
 * nb Hold          | Tap
 * ----------------------------
 * 1  L/RCTRL         | ENTER
 * 2  LALT            | ENTER
 * 3  L/RCTRL + LALT  | ENTER
 */
void td_allctrl_finished(qk_tap_dance_state_t *state, uint8_t _kc)
{
  switch (check_tap_state(state))
  {
    case (TRIPLE_TD|TAPPED_TD):   // triple tap
      register_code(KC_ENTER);
    case (TAPPED_TD | DOUBLE_TD): // double tap
      register_code(KC_ENTER);
    case (TAPPED_TD | SINGLE_TD): // single tap
      register_code(KC_ENTER);
      break;
    case SINGLE_TD:               // single hold
      register_code(_kc);
      break;
    case DOUBLE_TD:               // double hold
      register_code(KC_LALT);
      break;
    case TRIPLE_TD:
      register_code(_kc);
      register_code(KC_LALT);
      break;
  }
}
void td_allctrl_reset(qk_tap_dance_state_t *state, uint8_t _kc)
{
  switch (check_tap_state(state))
  {
    case (TRIPLE_TD|TAPPED_TD):   // triple tap
      unregister_code(KC_ENTER);
    case (TAPPED_TD | DOUBLE_TD): // double tap
      unregister_code(KC_ENTER);
    case (TAPPED_TD | SINGLE_TD): // single tap
      unregister_code(KC_ENTER);
      break;
    case SINGLE_TD:               // single hold
      unregister_code(_kc);
      break;
    case DOUBLE_TD:               // double hold
      unregister_code(KC_LALT);
      break;
    case TRIPLE_TD:
      unregister_code(_kc);
      unregister_code(KC_LALT);
      break;
  }
}
void td_lctrl_finished(qk_tap_dance_state_t *state, void *user_data) { td_allctrl_finished(state, KC_LCTRL); }
void td_lctrl_reset(qk_tap_dance_state_t *state, void *user_data) { td_allctrl_reset(state, KC_LCTRL); }
void td_rctrl_finished(qk_tap_dance_state_t *state, void *user_data) { td_allctrl_finished(state, KC_RCTRL); }
void td_rctrl_reset(qk_tap_dance_state_t *state, void *user_data) { td_allctrl_reset(state, KC_RCTRL); }
// end LCTRL & RCTRL



uint32_t check_tap_state(qk_tap_dance_state_t *state)
{
  uint32_t _tap_dance_state = state->count;
  if (state->interrupted || state->pressed == 0) return _tap_dance_state;
  else if (state->pressed) return (TAPPED_TD | _tap_dance_state);
  return UNKNOWN_TD;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TDGUI]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_super_finished, td_super_reset),

  [TDLCTRL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_lctrl_finished, td_lctrl_reset),
  [TDRCTRL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_rctrl_finished, td_rctrl_reset),

  [TLCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPS),
  [TRCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_RSHIFT, KC_CAPS),

  [TCOPY]   = ACTION_TAP_DANCE_DOUBLE(KC_LEFT, KC_COPY),
  [TPASTE]  = ACTION_TAP_DANCE_DOUBLE(KC_UP, KC_PASTE),

  [TRF1]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F1_finished,  td_F1_reset),
  [TRF2]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F2_finished,  td_F2_reset),
  [TRF3]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F3_finished,  td_F3_reset),
  [TRF4]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F4_finished,  td_F4_reset),
  [TRF5]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F5_finished,  td_F5_reset),
  [TRF6]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F6_finished,  td_F6_reset),
  [TRF7]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F7_finished,  td_F7_reset),
  [TRF8]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F8_finished,  td_F8_reset),
  [TRF9]    = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_F9_finished,  td_F9_reset),
  [TRF10]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL,td_F10_finished, td_F10_reset),
};

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_tap_dance.h"

static uint8_t tdState = 0;

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
  tdState = check_tap_state(state);
  switch (tdState)
  {
    case SINGLE_HOLD_TD: register_code(KC_RGUI); break;               // single hold
    case SINGLE_TAP_TD: register_code(KC_LGUI); break; // single tap
    case DOUBLE_HOLD_TD: register_code(KC_LALT | KC_LSHIFT); break;   // double hold
    case DOUBLE_TAP_TD: layer_on(FNCT); break;    // double tap
  }
}
void td_super_reset(qk_tap_dance_state_t *state, void *user_data){
  switch (tdState)
  {
    case SINGLE_HOLD_TD: unregister_code(KC_RGUI); break;
    case SINGLE_TAP_TD: unregister_code(KC_LGUI); break;
    case DOUBLE_HOLD_TD: unregister_code(KC_LALT | KC_LSHIFT); break;
    case DOUBLE_TAP_TD: layer_off(FNCT); break;
  }
  tdState = 0;
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
  switch (state->count)
  {
    case 1:               // single hold
      register_code(_kc);
      break;
    case 2:               // double hold
      register_code(KC_LALT);
      break;
    case 3:
      register_code(_kc);
      register_code(KC_LALT);
      break;
  }
}
void td_allctrl_reset(qk_tap_dance_state_t *state, uint8_t _kc)
{
  switch (state->count)
  {
    case 1:               // single hold
      unregister_code(_kc);
      break;
    case 2:               // double hold
      unregister_code(KC_LALT);
      break;
    case 3:
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


// Space/FN
void td_SPC_finished(qk_tap_dance_state_t *state, void *user_data)
{
  tdState = check_tap_state(state);
  switch (tdState)
  {
    case SINGLE_TAP_TD:
      register_code(KC_SPC);
      break;
    case SINGLE_HOLD_TD:
      layer_on(FNCT);
      break;
    case UNKNOWN_TD:
    default:
      register_code(KC_SPC);
      break;
  }
}
void td_SPC_reset(qk_tap_dance_state_t *state, void *user_data)
{
  switch (tdState)
  {
    case SINGLE_TAP_TD:
      unregister_code(KC_SPC);
      break;
    case SINGLE_HOLD_TD:
      layer_off(FNCT);
      break;
    case UNKNOWN_TD:
    default:
      unregister_code(KC_SPC);
      break;
  }
  tdState = 0;
}
// end space/fn


uint8_t check_tap_state(qk_tap_dance_state_t *_state)
{
  uint8_t danceState = UNKNOWN_TD;

  switch (_state->count)
  {
    case 1:
      if (_state->interrupted || _state->pressed==0) danceState = SINGLE_TAP_TD;
      else danceState = SINGLE_HOLD_TD;
      break;
    case 2:
      if (_state->interrupted) danceState = DOUBLE_SINGLE_TAP_TD;
      else if (_state->pressed) danceState = DOUBLE_HOLD_TD;
      else danceState = DOUBLE_TAP_TD;
      break;
    case 3:
      if (_state->interrupted) danceState = TRIPLE_SINGLE_TAP_TD;
      else if (_state->pressed) danceState = TRIPLE_HOLD_TD;
      else danceState = TRIPLE_TAP_TD;
      break;
    case 4:
      if (_state->interrupted) danceState = QUADRU_SINGLE_TAP_TD;
      else if (_state->pressed) danceState = QUADRU_HOLD_TD;
      else danceState = QUADRU_TAP_TD;
      break;
    case 5:
      if (_state->interrupted) danceState = FIVEFOLD_SINGLE_TAP_TD;
      else if (_state->pressed) danceState = FIVEFOLD_HOLD_TD;
      else danceState = FIVEFOLD_TAP_TD;
      break;
    case 6:
      if (_state->interrupted) danceState = SIXFOLD_SINGLE_TAP_TD;
      else if (_state->pressed) danceState = SIXFOLD_HOLD_TD;
      else danceState = SIXFOLD_TAP_TD;
      break;
  }

  return danceState;
}

void td_Mall_finished(qk_tap_dance_state_t *_state, uint8_t _kc)
{
  tdState = check_tap_state(_state);
  switch (tdState)
  {
    case SINGLE_TAP_TD:
      register_code(KC_ENTER);
      break;
    case SINGLE_HOLD_TD:
      register_code(_kc);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
      register_code(KC_ENTER); unregister_code(KC_ENTER); register_code(KC_ENTER);
      break;
    case DOUBLE_HOLD_TD:
      register_code(KC_RALT);
      break;
    case UNKNOWN_TD:
    default:
      register_code(_kc);
      break;
  }
}

void td_Mall_reset(qk_tap_dance_state_t *_state, uint8_t _kc)
{
  switch (tdState)
  {
    case SINGLE_TAP_TD:
      unregister_code(KC_ENTER);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(_kc);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
      unregister_code(KC_ENTER);
      break;
    case DOUBLE_HOLD_TD:
      unregister_code(KC_RALT);
      break;
    case UNKNOWN_TD:
    default:
      unregister_code(_kc);
      break;
  }
  tdState = 0;
}

void td_LM_finished(qk_tap_dance_state_t *state, void *user_data) { td_Mall_finished(state, KC_LSHIFT); }
void td_RM_finished(qk_tap_dance_state_t *state, void *user_data) { td_Mall_finished(state, KC_RSHIFT); }
void td_LM_reset(qk_tap_dance_state_t *state, void *user_data) { td_Mall_reset(state, KC_LSHIFT); }
void td_RM_reset(qk_tap_dance_state_t *state, void *user_data) { td_Mall_reset(state, KC_RSHIFT); }


qk_tap_dance_action_t tap_dance_actions[] = {
  [TDGUI]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_super_finished, td_super_reset),

  [TDLCTRL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_lctrl_finished, td_lctrl_reset),
  [TDRCTRL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_rctrl_finished, td_rctrl_reset),

  [TLCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPS),
  [TRCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_RSHIFT, KC_CAPS),

  [TDSHIFTENTERL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_LM_finished, td_LM_reset),
  [TDSHIFTENTERR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_RM_finished, td_RM_reset),

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

  [SPCFN]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_SPC_finished, td_SPC_reset),
};

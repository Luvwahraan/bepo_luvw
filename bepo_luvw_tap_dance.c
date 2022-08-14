#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_lowline_modtap.h"

static uint8_t tdState = 0;

// Functions
void td_function_finished(qk_tap_dance_state_t *state, void *user_data) {
    qk_tap_dance_pair_t *pair = (qk_tap_dance_pair_t *)user_data;

  switch (state->count) {
    case 1: register_code(pair->kc1); break;
    case 2: register_code(pair->kc2); break;
    case 3: register_code(KC_LALT); register_code(pair->kc2); break;
    case 4: register_code(KC_LCTRL); register_code(pair->kc2); break;
    default: register_code(pair->kc1); break;
  }
}
void td_function_reset(qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1: unregister_code(pair->kc1); break;
    case 2: unregister_code(pair->kc2); break;
    case 3: unregister_code(KC_LALT); unregister_code(pair->kc2); break;
    case 4: unregister_code(KC_LCTRL); unregister_code(pair->kc2); break;
    default: unregister_code(pair->kc1); break;
  }
}
// end Function

/*
// Maj 
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
// end maj*/


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


// Hold tap
void td_holdtap_finished(qk_tap_dance_state_t *_state, void *user_data) {
    qk_tap_dance_pair_t *pair = (qk_tap_dance_pair_t *)user_data;

    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(pair->kc1);
        break;
    case SINGLE_HOLD_TD:
        register_code(pair->kc2);
        break;
    case UNKNOWN_TD:
    default:
        register_code(pair->kc2);
        break;
    }
}

void td_holdtap_reset(qk_tap_dance_state_t *_state, void *user_data) {
    qk_tap_dance_pair_t *pair = (qk_tap_dance_pair_t *)user_data;

  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(pair->kc1);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(pair->kc2);
      break;
    case UNKNOWN_TD:
    default:
      unregister_code(pair->kc2);
      break;
  }
  tdState = 0;
}
// End hold tap



// Hold: shift, Tap: compose, Double tap: compose compose
void td_LShift_finished(qk_tap_dance_state_t *_state, void *user_data) {

    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(BP_COMPOSE);
        break;
    case SINGLE_HOLD_TD:
        register_code(KC_LSHIFT);
        break;
    case DOUBLE_TAP_TD:
        register_code(BP_COMPOSE);
        unregister_code(BP_COMPOSE);
        register_code(BP_COMPOSE);
        break;
    case UNKNOWN_TD:
    default:
        register_code(BP_COMPOSE);
        break;
    }
}
void td_LShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
    qk_tap_dance_pair_t *pair = (qk_tap_dance_pair_t *)user_data;

  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(BP_COMPOSE);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(KC_LSHIFT);
      break;
    case UNKNOWN_TD:
    case DOUBLE_TAP_TD:
      unregister_code(BP_COMPOSE);
    default:
      unregister_code(BP_COMPOSE);
      break;
  }
  tdState = 0;
}
void td_RShift_finished(qk_tap_dance_state_t *_state, void *user_data) {

    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(BP_COMPOSE);
        break;
    case SINGLE_HOLD_TD:
        register_code(KC_RSHIFT);
        break;
    case DOUBLE_TAP_TD:
        register_code(BP_COMPOSE);
        unregister_code(BP_COMPOSE);
        register_code(BP_COMPOSE);
        break;
    case UNKNOWN_TD:
    default:
        register_code(BP_COMPOSE);
        break;
    }
}
void td_RShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
    qk_tap_dance_pair_t *pair = (qk_tap_dance_pair_t *)user_data;

  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(BP_COMPOSE);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(KC_RSHIFT);
      break;
    case UNKNOWN_TD:
    case DOUBLE_TAP_TD:
      unregister_code(BP_COMPOSE);
    default:
      unregister_code(BP_COMPOSE);
      break;
  }
  tdState = 0;
}
// End generic hold shift



qk_tap_dance_action_t tap_dance_actions[] = {
  [TDSHIFTENTERL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_LM_finished, td_LM_reset),
  [TDSHIFTENTERR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_RM_finished, td_RM_reset),

  [TCOPY]   = ACTION_TAP_DANCE_DOUBLE(KC_LEFT,  KC_COPY),
  [TPASTE]  = ACTION_TAP_DANCE_DOUBLE(KC_UP,    KC_PASTE),

  [TDBPESC] = ACTION_TAP_DANCE_DOUBLE(BP_DOLLAR,KC_ESC),
  [TDFRESC] = ACTION_TAP_DANCE_DOUBLE(FR_DLR,   KC_ESC),

  // Ex. → F1: tap=" doubde tap=F1 triple tap=alt+F1 four tap= lctrl+F1
  [TRF1]    = FUNCTION_TAP(BP_DQOT, KC_F1),
  [TRF2]    = FUNCTION_TAP(BP_LGIL, KC_F2),
  [TRF3]    = FUNCTION_TAP(BP_RGIL, KC_F3),
  [TRF4]    = FUNCTION_TAP(BP_LPRN, KC_F4),
  [TRF5]    = FUNCTION_TAP(BP_RPRN, KC_F5),
  [TRF6]    = FUNCTION_TAP(BP_AT,   KC_F6),
  [TRF7]    = FUNCTION_TAP(BP_PLUS, KC_F7),
  [TRF8]    = FUNCTION_TAP(BP_MINUS, KC_F8),
  [TRF9]    = FUNCTION_TAP(BP_SLASH, KC_F9),
  [TRF10]   = FUNCTION_TAP(BP_ASTR,  KC_F10),
  [TRF11]   = FUNCTION_TAP(BP_EQUAL, KC_F11),
  [TRF12]   = FUNCTION_TAP(BP_PERC,  KC_F12),

  [SPCFN]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_SPC_finished, td_SPC_reset),
  
  // Double tap
  [TDUNDOEMOJI] = ACTION_TAP_DANCE_DOUBLE(BP_UNDO,  BP_EMOJI);
  [TDMUTERCTL]  = ACTION_TAP_DANCE_DOUBLE(KC_MUTE,  BP_RCTL);
  [TDCOPYPASTE] = ACTION_TAP_DANCE_DOUBLE(BP_COPY,  BP_PASTE);
  [TDEGRVUP]    = ACTION_TAP_DANCE_DOUBLE(BP_EGRV,  KC_PGUP);
  [TDCOMMADN]   = ACTION_TAP_DANCE_DOUBLE(BP_COMMA, KC_PGDN);

  // Mod on keys: left keyboard
  [TDTABLCTL]   = ACTION_HOLD_TAP(KC_TAB,   KC_LCTL);
  [TDAGRVSUPER] = ACTION_HOLD_TAP(BP_AGRV,  BP_LSUPER);
  [TDYLALT]     = ACTION_HOLD_TAP(BP_Y,     KC_LALT);
  [TDLSCMP]     = ACTION_HOLD_TAP(BP_CMP,   KC_LSHIFT);
  
  // Mod on keys: right keyboard
  [TDFRALT]     = ACTION_HOLD_TAP(BP_F,     KC_RALT);
  [TDWAPP]      = ACTION_HOLD_TAP(BP_W,     KC_APP);

  // Hold: shift, Tap: compose, Double tap: compose compose
  [TDLSCMP]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_LShift_finished, td_LShift_reset);
  [TDRSCMP]     = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_RShift_finished, td_RShift_reset);
  
  // Change workspace
  [TDLDESKMAJWIN]   = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, WLWS);
  [TDLDESKMAJLINUX] = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, LWS);
  [TDRDESKMAJWIN]   = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, WRWS);
  [TDRDESKMAJLINUX] = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, RWS);

};

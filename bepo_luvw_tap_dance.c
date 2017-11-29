#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_tap_dance.h"


// ALT+F1
void td_F1_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F1); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F1_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_DQOT); }
}
void td_F1_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_DQOT); return; }
  if (state->count >= 2) { unregister_code(KC_F1); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F1


// ALT+F2
void td_F2_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F2); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F2_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_LGIL); }
}
void td_F2_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_LGIL); return; }
  if (state->count >= 2) { unregister_code(KC_F2); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F2


// ALT+F3
void td_F3_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F3); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F3_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_RGIL); }
}
void td_F3_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_RGIL); return; }
  if (state->count >= 2) { unregister_code(KC_F3); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F3


// ALT+F4
void td_F4_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F4); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F4_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_LPRN); }
}
void td_F4_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_LPRN); return; }
  if (state->count >= 2) { unregister_code(KC_F4); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F4


// ALT+F5
void td_F5_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F5); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F5_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_RPRN); }
}
void td_F5_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_RPRN); return; }
  if (state->count >= 2) { unregister_code(KC_F5); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F5


// ALT+F6
void td_F6_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F6); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F6_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1)  { register_code(BP_AT); }
}
void td_F6_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_AT); return; }
  if (state->count >= 2) { unregister_code(KC_F6); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F6


// ALT+F7
void td_F7_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F7); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F7_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1)  { register_code(BP_PLUS); }
}
void td_F7_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_PLUS); return; }
  if (state->count >= 2) { unregister_code(KC_F7); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F7


// ALT+F8
void td_F8_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F8); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F8_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_MINUS); }
}
void td_F8_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_MINUS); return; }
  if (state->count >= 2) { unregister_code(KC_F8); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F8


// ALT+F9
void td_F9_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F9); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F9_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_SLASH); }
}
void td_F9_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_SLASH); return; }
  if (state->count >= 2) { unregister_code(KC_F9); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F9


// ALT+F10
void td_F10_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 2: register_code(KC_F10); break;
    case 3: register_code(KC_LALT); break;
    case 4: register_code(KC_LCTRL); break;
  }
}

void td_F10_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { register_code(BP_ASTR); }
}
void td_F10_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count <= 1) { unregister_code(BP_ASTR); return; }
  if (state->count >= 2) { unregister_code(KC_F10); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count >= 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F10



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
 * 2  L/RCTRL + LALT  | ENTER
 */
void td_allctrl_finished(qk_tap_dance_state_t *state, uint8_t _kc)
{
  // single and double possible, so 4 possibilities
  switch (check_tap_state(state))
  {
    case SINGLE_TD: register_code(_kc); break;                         // single hold
    case (TAPPED_TD | SINGLE_TD): register_code(KC_ENTER); break;      // single tap
    case DOUBLE_TD: register_code(_kc) ; register_code(KC_LALT); break;// double hold
    case (TAPPED_TD | DOUBLE_TD): register_code(KC_ENTER); break;      // double tap
  }
}
void td_allctrl_reset(qk_tap_dance_state_t *state, uint8_t _kc)
{
  switch (check_tap_state(state))
  {
    case SINGLE_TD: unregister_code(_kc); break;
    case (TAPPED_TD | SINGLE_TD): unregister_code(KC_ENTER); break;
    case DOUBLE_TD: unregister_code(_kc) ; unregister_code(KC_LALT); break;
    case (TAPPED_TD | DOUBLE_TD): register_code(KC_ENTER); break;
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

  [TRF1]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F1_each, td_F1_finished,  td_F1_reset),
  [TRF2]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F2_each, td_F2_finished,  td_F2_reset),
  [TRF3]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F3_each, td_F3_finished,  td_F3_reset),
  [TRF4]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F4_each, td_F4_finished,  td_F4_reset),
  [TRF5]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F5_each, td_F5_finished,  td_F5_reset),
  [TRF6]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F6_each, td_F6_finished,  td_F6_reset),
  [TRF7]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F7_each, td_F7_finished,  td_F7_reset),
  [TRF8]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F8_each, td_F8_finished,  td_F8_reset),
  [TRF9]    = ACTION_TAP_DANCE_FN_ADVANCED(td_F9_each, td_F9_finished,  td_F9_reset),
  [TRF10]   = ACTION_TAP_DANCE_FN_ADVANCED(td_F10_each,td_F10_finished, td_F10_reset),
};

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_tap_dance.h"

// Password generator
void td_rand_finished(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) {
    register_code(BP_P);
  }
}
void td_rand_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) {
    unregister_code(BP_P);
  }
}
void td_rand_each(qk_tap_dance_state_t *state, void *user_data)
{
  switch (state->count)
  {
    case 1:
      for (uint8_t i=0; i>=5; i++) {
        tap_random_base64();
      }
      break;
    case 2:
      for (uint8_t i=0; i>=3; i++) {
        tap_random_base64();
      }
      break;
    case 3:
      for (uint8_t i=0; i>=4; i++) {
        tap_random_base64();
      }
      break;
    case 4:
      for (uint8_t i=0; i>=3; i++) {
        tap_random_base64();
        reset_tap_dance(state);
      }
      break;
  }
}
// end password generator


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
  if (state->count < 1) { register_code(BP_DQOT); }
}
void td_F1_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_DQOT); return; }
  if (state->count >= 2) { unregister_code(KC_F1); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_LGIL); }
}
void td_F2_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_LGIL); return; }
  if (state->count >= 2) { unregister_code(KC_F2); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_RGIL); }
}
void td_F3_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_RGIL); return; }
  if (state->count >= 2) { unregister_code(KC_F3); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_LPRN); }
}
void td_F4_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_LPRN); return; }
  if (state->count >= 2) { unregister_code(KC_F4); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_RPRN); }
}
void td_F5_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_RPRN); return; }
  if (state->count >= 2) { unregister_code(KC_F5); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_AT); }
}
void td_F6_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_AT); return; }
  if (state->count >= 2) { unregister_code(KC_F6); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_PLUS); }
}
void td_F7_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_PLUS); return; }
  if (state->count >= 2) { unregister_code(KC_F7); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_MINUS); }
}
void td_F8_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_MINUS); return; }
  if (state->count >= 2) { unregister_code(KC_F8); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_SLASH); }
}
void td_F9_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_SLASH); return; }
  if (state->count >= 2) { unregister_code(KC_F9); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
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
  if (state->count < 1) { register_code(BP_ASTR); }
}
void td_F10_reset(qk_tap_dance_state_t *state, void *user_data)
{
  if (state->count < 1) { unregister_code(BP_ASTR); return; }
  if (state->count >= 2) { unregister_code(KC_F10); }
  if (state->count >= 3) { unregister_code(KC_LALT); }
  if (state->count == 4) { unregister_code(KC_LCTRL); }
}
// end ALT+F10

/* L and R Super/GUI keys with same actions
 *
 * LSuper
 *    Tap       Hold
 * 1  KC_RGUI   KC_LGUI
 * 2  LOCK      KC_LGUI + LSHIFT        */
void td_lsuper_each(qk_tap_dance_state_t *state, void *user_data)
{
}
void td_lsuper_finished(qk_tap_dance_state_t *state, void *user_data);
void td_lsuper_reset(qk_tap_dance_state_t *state, void *user_data);
/* RSuper
 *    Tap       Hold
 * 1  KC_RGUI   KC_LGUI
 * 2  LOCK      KC_LGUI + LSHIFT        */
void td_rsuper_each(qk_tap_dance_state_t *state, void *user_data);
void td_rsuper_finished(qk_tap_dance_state_t *state, void *user_data);
void td_rsuper_reset(qk_tap_dance_state_t *state, void *user_data);




uint8_t check_tap_state(qk_tap_dance_state_t *state)
{
  if (state->interrupted || state->pressed == 0) return 0;
  else if (state->pressed) return 1;
}


qk_tap_dance_action_t tap_dance_actions[] = {
  [TDLGUI]  = ACTION_TAP_DANCE_FN_ADVANCED(td_lsuper_each, td_lsuper_finished, td_lsuper_reset),
  [TDRGUI]  = ACTION_TAP_DANCE_FN_ADVANCED(td_rsuper_each, td_rsuper_finished, td_rsuper_reset),

  [TLCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPS),
  [TRCAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_RSHIFT, KC_CAPS),

  [TCOPY]   = ACTION_TAP_DANCE_DOUBLE(KC_LEFT, KC_COPY),
  [TPASTE]  = ACTION_TAP_DANCE_DOUBLE(KC_UP, KC_PASTE),

  [TRAND]   = ACTION_TAP_DANCE_FN_ADVANCED(td_rand_each,  td_rand_finished,   td_rand_reset),

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

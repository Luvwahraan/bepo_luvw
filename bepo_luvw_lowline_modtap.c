#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_lowline_modtap.h"


// Generic hold tap

void td_generic_finished(qk_tap_dance_state_t *_state, void *user_data) {
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

void td_generic_reset(qk_tap_dance_state_t *_state, void *user_data) {
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
// End generic hold tap
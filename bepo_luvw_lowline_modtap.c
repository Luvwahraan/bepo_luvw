#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
#include "bepo_luvw_lowline_modtap.h"

// LShift
void td_WinLeftShift_finished(qk_tap_dance_state_t *_state, void *user_data) {
  tdState = check_tap_state(_state);
  switch (tdState) {
    case SINGLE_TAP_TD:
      register_code(WLWS);
      break;
    case SINGLE_HOLD_TD:
      register_code(KC_LSHIFT);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
      register_code(KC_LSHIFT);
      break;
  }
}
void td_WinLeftShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
    switch (tdState) {
    case SINGLE_TAP_TD:
        unregister_code(WLWS);
        break;
    case SINGLE_HOLD_TD:
        unregister_code(KC_LSHIFT);
        break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
        unregister_code(KC_LSHIFT);
        break;
    }
    tdState = 0;
}
// end LShift

// RShift
void td_RightShift_finished(qk_tap_dance_state_t *_state, void *user_data) {
    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(WRWS);
        break;
    case SINGLE_HOLD_TD:
        register_code(KC_RSHIFT);
        break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
        register_code(KC_RSHIFT);
        break;
    }
}
void td_RightShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(WRWS);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(KC_RSHIFT);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
      unregister_code(KC_RSHIFT);
      break;
  }
  tdState = 0;
}
// end RShift


// Linux versions

// LShift
void td_LinuxLeftShift_finished(qk_tap_dance_state_t *_state, void *user_data) {
  tdState = check_tap_state(_state);
  switch (tdState) {
    case SINGLE_TAP_TD:
      register_code(LWS);
      break;
    case SINGLE_HOLD_TD:
      register_code(KC_LSHIFT);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
      register_code(KC_LSHIFT);
      break;
  }
}
void td_LinuxLeftShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
    switch (tdState) {
    case SINGLE_TAP_TD:
        unregister_code(LWS);
        break;
    case SINGLE_HOLD_TD:
        unregister_code(KC_LSHIFT);
        break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
        unregister_code(KC_LSHIFT);
        break;
    }
    tdState = 0;
}
// end LShift

// RShift
void td_LinuxRightShift_finished(qk_tap_dance_state_t *_state, void *user_data) {
    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(RWS);
        break;
    case SINGLE_HOLD_TD:
        register_code(KC_RSHIFT);
        break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
        register_code(KC_RSHIFT);
        break;
    }
}
void td_LinuxRightShift_reset(qk_tap_dance_state_t *_state, void *user_data) {
  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(RWS);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(KC_RSHIFT);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
      unregister_code(KC_RSHIFT);
      break;
  }
  tdState = 0;
}
// end RShift



// Enter
void td_Enter_finished(qk_tap_dance_state_t *_state, void *user_data) {
    tdState = check_tap_state(_state);
    switch (tdState) {
    case SINGLE_TAP_TD:
        register_code(KC_ENTER);
        break;
    case SINGLE_HOLD_TD:
        register_code(BP_COMPOSE);
        break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
        register_code(BP_COMPOSE);
        break;
    }
}
void td_Enter_reset(qk_tap_dance_state_t *_state, void *user_data) {
  switch (tdState) {
    case SINGLE_TAP_TD:
      unregister_code(KC_ENTER);
      break;
    case SINGLE_HOLD_TD:
      unregister_code(BP_COMPOSE);
      break;
    case DOUBLE_TAP_TD:
    case DOUBLE_SINGLE_TAP_TD:
    case DOUBLE_HOLD_TD:
    case UNKNOWN_TD:
    default:
      unregister_code(BP_COMPOSE);
      break;
  }
  tdState = 0;
}
// end Enter


#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_leaders.h"
#include "bepo_luvw_layouts.h"

LEADER_EXTERNS();

void matrix_scan_user(void) {
  static bool locked = false;

  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    /* N
     * NUMK layer
    SEQ_ONE_KEY(BP_N)
    {
      layer_or(biton32(NUMK));
    }*/

    /* $
     * ESC key */
    SEQ_ONE_KEY(BP_DOLLAR)
    {
      send_keystrokes(KC_ESC, KC_NO);
    }

    /* P O W A
     * System power OFF */
    SEQ_FOUR_KEYS(BP_P, BP_O, BP_W, BP_A)
    {
      send_keystrokes(KC_PWR, KC_NO);
    }
  }
}

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
     * NUMK layer */
    SEQ_ONE_KEY(BP_N)
    {
      layer_or(biton32(NUMK));
    }

    /* $
     * ESC key */
    SEQ_ONE_KEY(BP_DOLLAR)
    {
      send_keystrokes(KC_ESC, KC_NO);
    }

    /* Tab Lead or Z Lead
     * Toggle bépo mirror layer
     * Active only when bépo activated */
    SEQ_ONE_KEY((KC_TAB|BP_Z))
    {
      if (layer_state | U32(BEPO) ) layer_xor(biton32(OPEB));
    }

    /* Space space
     * Spacebar FN lock */
    SEQ_TWO_KEYS(KC_SPC, KC_SPC)
    {
      layer_or(biton32(FLOK));
    }

    /* L O L
     * Keyboard lock */
    SEQ_THREE_KEYS(BP_L, BP_O, BP_L)
    {
      if (!locked)
      {
        locked = true;
        layer_on(LOCK);
      }
      else
      {
        layer_off(LOCK);
        locked = false;
      }
    }

    /* P O W A
     * System power OFF */
    SEQ_FOUR_KEYS(BP_P, BP_O, BP_W, BP_A)
    {
      send_keystrokes(KC_PWR, KC_NO);
    }
  }
}

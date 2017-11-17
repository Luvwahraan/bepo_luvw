#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "utils.h"
#include "bepo_luvw_leaders.h"
#include "bepo_luvw_layouts.h"

LEADER_EXTERNS();

void matrix_scan_user(void) {
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
     * Toggle mirror layer */
    SEQ_ONE_KEY((KC_TAB|BP_Z))
    {
      layer_xor(biton32(OPEB));
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
      uint32_t lockBit = biton32(LOCK);
      if (layer_state != lockBit)
      {
        default_layer_set(lockBit);
        clear_keyboard();
        layer_clear();
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

#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"

/*                  *
 *                  *
 * Not tested yet!  *
 *                  *
 *                  */

#ifdef KEYLOGGER_ENABLE
bool log_enable = true;
#endif

#include "utils.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_macros.h"
#include "bepo_luvw_leaders.h"
#include "bepo_luvw_layouts.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
# ifdef KEYLOGGER_ENABLE
  if (log_enable)
  {
    printf(
      "{\"keylog\": true, \"col\": %d, \"row\": %d, \"pressed\": %d, \"layer\": \"%s\"}\n",
      record->event.key.row,
      record->event.key.col,
      record->event.pressed,
      getLayerName(default_layer_state) );
  }
# endif
  return true;

}

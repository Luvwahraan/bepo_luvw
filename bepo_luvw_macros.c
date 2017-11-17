#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_macros.h"



void nav_layers(const int8_t _nav)
{
  static uint8_t current_pos = SW_BEGIN;

  // Init.
  if (_nav == 0) {
    check_quick_layers(QBA_);
    return;
  }

  current_pos += _nav;
  if (current_pos > SW_LIMIT) current_pos = SW_BEGIN;
  if (current_pos < SW_BEGIN) current_pos = SW_LIMIT;

  check_quick_layers(current_pos);
}


void check_quick_layers(const uint8_t id)
{
  switch(id)
  {
    /* Quick layers macros:
     * applies base layer combined with others
     */
    case QBA_: // BÉPO                 BEPOA_
      default_layer_set(BEPOA_);
      break;
    case QAA_: // AZERTY               AZERA_
      default_layer_set(AZERA_);
      break;
    case QBN_: // BÉPO + NUMK          BEPOAK
      default_layer_set(BEPOAK);
      break;
    case QAN_: // AZERTY + NUMK        AZERAK
      default_layer_set(AZERAK);
      break;
    case QBP_: // BÉPO + PLAY          BP____
      default_layer_set(BP____);
      break;
    case QAP_: // AZER + PLAY          AP____
      default_layer_set(AP____);
      break;
    case QBPK: // BÉPO + PLAY + NUMK   BPN___
      default_layer_set(BPN___);
      break;
    case QAPK: // AZER + PLAY + NUMK   APN___
      default_layer_set(APN___);
      break;
    /*default:
      default_layer_set( U32(BEPO) );*/
  }
}



const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{

  switch(id)
  {
    // Switch between layers
    case SW_N:
      nav_layers(1);
      return MACRO_NONE;
    case SW_P:
      nav_layers(-1);
      return MACRO_NONE;
    case SW_I:
      nav_layers(0);
      return MACRO_NONE;
  }

  check_quick_layers(id);

  return MACRO_NONE;
};

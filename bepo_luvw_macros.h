#ifndef BEPO_LUVW_MACROS
#define BEPO_LUVW_MACROS


void nav_layers(const int8_t);
void check_quick_layers(const uint8_t);
const macro_t *action_get_macro(keyrecord_t*, uint8_t, uint8_t);


// Macros
enum {
  SW_N = 0,   // Switch next layer
  SW_P,       // Switch prev layer
  SW_I,       // Switch init : move on SW_BEGIN and set current switch

// Quick layers
// MODA
  QBA_,       // BÉPO                 BEPOA_
  QBN_,       // BÉPO + NUMK          BEPOAK
  QAA_,       // AZERTY               AZERA_
  QAN_,       // AZERTY + NUMK        AZERAK
  QBP_,       // BÉPO + PLAY          BP____
  QBPK,       // BÉPO + PLAY + NUMK   BPN___
  QAP_,       // AZER + PLAY          AP____
  QAPK,       // AZER + PLAY + NUMK   APN___
};

// Switch macro limits
#define SW_BEGIN  QBA_
#define SW_LIMIT  QAN_

#endif

#ifndef BEPO_LUVW_TAP_DANCE
#define BEPO_LUVW_TAP_DANCE

#include "utils.h"

// Tap dance
enum
{
  TCOPY = 0,
  TPASTE,
  TRAND,
  TLCAPS,
  TRCAPS,
  TRF1,
  TRF2,
  TRF3,
  TRF4,
  TRF5,
  TRF6,
  TRF7,
  TRF8,
  TRF9,
  TRF10,
  TDGUI,
  TDLCTRL,
  TDRCTRL,
  SPCFN,
};

// Tap dance keys
#define TD_COPY   TD(TCOPY)
#define TD_PASTE  TD(TPASTE)
#define TD_LCAPS  TD(TLCAPS)
#define TD_RCAPS  TD(TRCAPS)
#define TD_F1     TD(TRF1)
#define TD_F2     TD(TRF2)
#define TD_F3     TD(TRF3)
#define TD_F4     TD(TRF4)
#define TD_F5     TD(TRF5)
#define TD_F6     TD(TRF6)
#define TD_F7     TD(TRF7)
#define TD_F8     TD(TRF8)
#define TD_F9     TD(TRF9)
#define TD_F10    TD(TRF10)
#define TD_GUI    TD(TDGUI)
#define TD_LCTRL  TD(TDLCTRL)
#define TD_RCTRL  TD(TDRCTRL)
#define TD_SPCFN  TD(SPCFN)


/* Easy Tap Dance states
 * bit      desc
 * 8        key state: 0 hold 1 tapped
 * 7        single tap
 * 6        double tap
 * 5        ...
 */
enum
{
  UNKNOWN_TD  = 0,
  SINGLE_TD   = 1,
  DOUBLE_TD   = 2,
  TRIPLE_TD   = 3,
  QUADRU_TD   = 4,
  FIVEFOLD_TD = 5,
  SIXFOLD_TD  = 6,
  TAPPED_TD   = 127,
};
uint32_t check_tap_state(qk_tap_dance_state_t *state);


#endif

#ifndef BEPO_LUVW_TAP_DANCE
#define BEPO_LUVW_TAP_DANCE

#include "utils.h"

// Tap dance
enum
{
  TCOPY = 0,
  TPASTE,
  TDSHIFTENTERL,
  TDSHIFTENTERR,
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
  TDLALT,
  TDRALT,
  TDBPESC,
  TDFRESC,
  
  // Added for ortho 4x8
  // juste double tap
  TDUNDOEMOJI
  TDMUTERCTL
  TDCOPYPASTE
  
  // hold or tap
  TDTABLCTL
  TDRETCMP
  TDAGRVSUPER
  TDYLALT
  TDFRALT
  TDWAPP
  TDEGRVUP
  TDCOMMADN
  
  // hold or tap workspaces 
  TDLDESKMAJWIN
  TDLDESKMAJLINUX
  TDRDESKMAJWIN
  TDRDESKMAJLINUX
};

// Tap dance keys
#define TD_COPY     TD(TCOPY)
#define TD_PASTE    TD(TPASTE)
#define TD_LMAJ     TD(TDSHIFTENTERL)
#define TD_RMAJ     TD(TDSHIFTENTERR)
#define TD_F1       TD(TRF1)
#define TD_F2       TD(TRF2)
#define TD_F3       TD(TRF3)
#define TD_F4       TD(TRF4)
#define TD_F5       TD(TRF5)
#define TD_F6       TD(TRF6)
#define TD_F7       TD(TRF7)
#define TD_F8       TD(TRF8)
#define TD_F9       TD(TRF9)
#define TD_F10      TD(TRF10)

#define TD_SPCFN    TD(SPCFN)
#define TD_RALT     TD(TDRALT)
#define TD_LALT     TD(TDLALT)
#define TD_BPESC    TD(TDBPESC)
#define TD_FRESC    TD(TDFRESC)

// Added for ortho 4x8
#define TD_UNDO     TD(TDUNDOEMOJI)
#define TD_MUTE     TD(TDMUTERCTL)
#define TD_COPY     TD(TDCOPYPASTE)
#define TD_TAB      TD(TDTABLCTL)
#define TD_ENTER    TD(TDRETCMP)
#define TD_AGRV     TD(TDAGRVSUPER)
#define TD_Y        TD(TDYLALT)
#define TD_F        TD(TDFRALT)
#define TD_W        TD(TDWAPP)
#define TD_EGRV     TD(TDEGRVUP)
#define TD_COMMA    TD(TDCOMMADN)
#define TD_LWMJ     TD(TDLDESKMAJWIN)
#define TD_LLMJ     TD(TDLDESKMAJLINUX)
#define TD_RWMJ     TD(TDRDESKMAJWIN)
#define TD_RLMJ     TD(TDRDESKMAJLINUX)
#define TD_LSHIFT   TD_LLMJ
#define TD_RSHIFT   TD_RLMJ


/* Easy Tap Dance states
 * bit      desc
 * 8        key state: 0 hold 1 tapped
 * 7        single tap
 * 6        double tap
 * 5        ...
 */
enum
{
  UNKNOWN_TD = 0x00,
  SINGLE_HOLD_TD,
  SINGLE_TAP_TD,
  DOUBLE_HOLD_TD,
  DOUBLE_TAP_TD,
  DOUBLE_SINGLE_TAP_TD,
  TRIPLE_HOLD_TD,
  TRIPLE_TAP_TD,
  TRIPLE_SINGLE_TAP_TD,
  QUADRU_HOLD_TD,
  QUADRU_TAP_TD,
  QUADRU_SINGLE_TAP_TD,
  FIVEFOLD_HOLD_TD,
  FIVEFOLD_TAP_TD,
  FIVEFOLD_SINGLE_TAP_TD,
  SIXFOLD_HOLD_TD,
  SIXFOLD_TAP_TD,
  SIXFOLD_SINGLE_TAP_TD,
};

uint8_t check_tap_state(qk_tap_dance_state_t *state);


#endif

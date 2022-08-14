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
  TDRLSCMP
  TDRRSCMP
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
#define TD_F11      TD(TRF11)
#define TD_F12      TD(TRF12)

#define TD_SPCFN    TD(SPCFN)
#define TD_RALT     TD(TDRALT)
#define TD_LALT     TD(TDLALT)
#define TD_BPESC    TD(TDBPESC)
#define TD_FRESC    TD(TDFRESC)

// Double tap
#define TD_UNDO     TD(TDUNDOEMOJI)
#define TD_MUTE     TD(TDMUTERCTL)
#define TD_COPY     TD(TDCOPYPASTE)

// Mod on keys: left keyboard
#define TD_ENTER    TD(TDRETCMP)
#define TD_AGRV     TD(TDAGRVSUPER)
#define TD_Y        TD(TDYLALT)

// Mod on keys: right keyboard
#define TD_F        TD(TDFRALT)
#define TD_W        TD(TDWAPP)
#define TD_EGRV     TD(TDEGRVUP)
#define TD_COMMA    TD(TDCOMMADN)

// Workspaces
#define TD_LWSPC    TD(TDLDESKMAJWIN)
#define TD_LLSPC    TD(TDLDESKMAJLINUX)
#define TD_RWSPC    TD(TDRDESKMAJWIN)
#define TD_RLSPC    TD(TDRDESKMAJLINUX)

// Shift compose
#define TD_LSHIFT   TD(TDLSCMP)
#define TD_RSHIFT   TD(TDRSCMP)

// Tap: LCTL, Hold: TAB, Double tap hold:
#define TD_TAB      TD(TDTABLCTL)


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


/**************************************************************************
 * Add predefined action like quantum/process_keycode/process_tap_dance.h *
 **************************************************************************/
 

// Functions (F1, F2, …)
void td_function_finished(qk_tap_dance_state_t*, void*);
void td_function_reset(qk_tap_dance_state_t*, void*);
#define FUNCTION_TAP(kc, kcF) \
    { .fn = {NULL, td_function_finished, td_function_reset}, .user_data = (void *)&((qk_tap_dance_pair_t){kc, kcF}), }

// Tap hold shift
void td_LShift_finished(qk_tap_dance_state_t*, void*);
void td_LShift_reset(qk_tap_dance_state_t*, void*);
void td_RShift_finished(qk_tap_dance_state_t*, void*);
void td_RShift_reset(qk_tap_dance_state_t*, void*);



// LShift
void td_WinLeftShift_finished(qk_tap_dance_state_t *, void *);
void td_WinLeftShift_reset(qk_tap_dance_state_t *, void *);

// RShift
void td_RightShift_finished(qk_tap_dance_state_t *, void *);
void td_RightShift_reset(qk_tap_dance_state_t *, void *);

// Enter
void td_Enter_finished(qk_tap_dance_state_t *, void *);
void td_Enter_reset(qk_tap_dance_state_t *, void *);




// Generic hold tap

void td_holdtap_finished(qk_tap_dance_state_t*, void*);
void td_holdtap_reset(qk_tap_dance_state_t*, void*);
#define ACTION_HOLD_TAP(kc_tap, kc_hold) \
    { .fn = {NULL, td_holdtap_finished, td_holdtap_reset}, .user_data = (void *)&((qk_tap_dance_pair_t){kc_tap, kc_hold}), }

// ACTION_HOLD_TAP(kc_tap, kc_hold);




#endif


#endif

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
};

// Tap dance keys
#define TD_COPY   TD(TCOPY)
#define TD_PASTE  TD(TPASTE)
#define TD_RAND   TD(TRAND)
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


/* Easy Tap Dance states
 * bit      desc
 * 8        key state: 0 hold 1 tapped
 * 7        single tap
 * 6        double tap
 * 5        ...
 */
enum
{
  UNKNOWN_TD  = 0,      // 0
  SINGLE_TD   = 1,      // 2    0b000000001 hold; 0b10000001 tapped
  DOUBLE_TD   = 2,      // 4    0b000000100 hold; 0b10000010 tapped
  TRIPLE_TD   = 3,      // 8
  QUADRU_TD   = 4,      // 16
  FIVEFOLD_TD = 5,      // 32
  SIXFOLD_TD  = 6,      // 64
  TAPPED_TD   = U32(7), // 128  0b000000000       0b10000000
};
uint32_t check_tap_state(qk_tap_dance_state_t *state);


/* LCTRL & RCTRL
 * nb Hold          | Tap
 * ----------------------------
 * 1  L/RCTRL         | ENTER
 * 2  L/RCTRL + LALT  | ENTER
 */
void td_allctrl_finished(qk_tap_dance_state_t *, uint8_t);
void td_allctrl_reset(qk_tap_dance_state_t *, uint8_t);
void td_ctrl_finished(qk_tap_dance_state_t *, void*);
void td_lctrl_reset(qk_tap_dance_state_t *, void*);
void td_rctrl_finished(qk_tap_dance_state_t *, void *);
void td_rctrl_reset(qk_tap_dance_state_t *, void *);
// end LCTRL & RCTRL




/* L and R Super/GUI keys with same actions
 * nb Hold     | Tap
 * ----------------------------
 * 1  KC_LGUI  | KC_RGUI
 * 2  MO(FNCT) | LALT + LSHIFT
 */
void td_super_finished(qk_tap_dance_state_t *state, void *user_data);
void td_super_reset(qk_tap_dance_state_t *state, void *user_data);
// end Super/GUI


// password generator
void td_rand_finished(qk_tap_dance_state_t *state, void *user_data);
void td_rand_reset(qk_tap_dance_state_t *state, void *user_data);
void td_rand_each(qk_tap_dance_state_t *state, void *user_data);
// end password generator


// ALT+F1
void td_F1_each(qk_tap_dance_state_t *state, void *user_data);
void td_F1_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F1_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F1


// ALT+F2
void td_F2_each(qk_tap_dance_state_t *state, void *user_data);
void td_F2_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F2_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F2


// ALT+F3
void td_F3_each(qk_tap_dance_state_t *state, void *user_data);
void td_F3_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F3_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F3


// ALT+F4
void td_F4_each(qk_tap_dance_state_t *state, void *user_data);
void td_F4_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F4_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F4


// ALT+F5
void td_F5_each(qk_tap_dance_state_t *state, void *user_data);
void td_F5_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F5_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F5


// ALT+F6
void td_F6_each(qk_tap_dance_state_t *state, void *user_data);
void td_F6_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F6_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F6


// ALT+F7
void td_F7_each(qk_tap_dance_state_t *state, void *user_data);
void td_F7_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F7_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F7


// ALT+F8
void td_F8_each(qk_tap_dance_state_t *state, void *user_data);
void td_F8_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F8_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F8


// ALT+F9
void td_F9_each(qk_tap_dance_state_t *state, void *user_data);
void td_F9_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F9_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F9


// ALT+F10
void td_F10_each(qk_tap_dance_state_t *state, void *user_data);
void td_F10_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F10_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F10

#endif

#ifndef BEPO_LUVW_MODTAP
#define BEPO_LUVW_MODTAP

#include "utils.h"

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

// Add predefined action like quantum/process_keycode/process_tap_dance.h
#define ACTION_HOLD_TAP(kc_tap, kc_hold) \
    { .fn = {NULL, td_generic_finished, td_generic_reset}, .user_data = (void *)&((qk_tap_dance_pair_t){kc_tap, kc_hold}), }

// ACTION_HOLD_TAP(kc_tap, kc_hold);

void td_generic_finished(qk_tap_dance_state_t*, void*);
void td_generic_reset(qk_tap_dance_state_t*, void*);

#endif

#ifndef BEPO_LUVW_TAP_DANCE
#define BEPO_LUVW_TAP_DANCE

// Tap dance
#define TCOPY     0
#define TPASTE    1
#define TRAND     2
#define TLCAPS    3
#define TRCAPS    4
#define TRF1      5
#define TRF2      6
#define TRF3      7
#define TRF4      8
#define TRF5      9
#define TRF6      10
#define TRF7      11
#define TRF8      12
#define TRF9      13
#define TRF10     14
#define TDLGUI    15
#define TDRGUI    16

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
#define TD_LGUI   TD(TDLGUI)
#define TD_RGUI   TD(TDRGUI)


uint8_t check_tap_state(qk_tap_dance_state_t *state);


/* L and R Super/GUI keys with same actions
 *
 * LSuper
 *    Tap       Hold
 * 1  KC_RGUI   KC_LGUI
 * 2  LOCK      KC_LGUI + LSHIFT        */
void td_lsuper_fn(qk_tap_dance_state_t *state, void *user_data);
void td_lsuper_finished(qk_tap_dance_state_t *state, void *user_data);
void td_lsuper_reset(qk_tap_dance_state_t *state, void *user_data);
/* RSuper
 *    Tap       Hold
 * 1  KC_RGUI   KC_LGUI
 * 2  LOCK      KC_LGUI + LSHIFT        */
void td_lsuper_fn(qk_tap_dance_state_t *state, void *user_data);
void td_lsuper_finished(qk_tap_dance_state_t *state, void *user_data);
void td_lsuper_reset(qk_tap_dance_state_t *state, void *user_data);



// password generator
void td_rand_finished(qk_tap_dance_state_t *state, void *user_data);
void td_rand_reset(qk_tap_dance_state_t *state, void *user_data);
void td_rand_fn(qk_tap_dance_state_t *state, void *user_data);
// end password generator


// ALT+F1
void td_F1_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F1_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F1_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F1


// ALT+F2
void td_F2_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F2_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F2_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F2


// ALT+F3
void td_F3_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F3_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F3_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F3


// ALT+F4
void td_F4_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F4_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F4_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F4


// ALT+F5
void td_F5_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F5_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F5_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F5


// ALT+F6
void td_F6_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F6_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F6_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F6


// ALT+F7
void td_F7_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F7_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F7_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F7


// ALT+F8
void td_F8_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F8_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F8_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F8


// ALT+F9
void td_F9_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F9_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F9_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F9


// ALT+F10
void td_F10_fn(qk_tap_dance_state_t *state, void *user_data);
void td_F10_finished(qk_tap_dance_state_t *state, void *user_data);
void td_F10_reset(qk_tap_dance_state_t *state, void *user_data);
// end ALT+F10

#endif


#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* keymap 0: default layer
 *
 * ,--------------------------------------------------.                                  ,--------------------------------------------------.
 * |   $    |   "  |   «  |   »  |   (  |   )  |   =  |                                  |Delete|   @  |   +  |   -  |   /  |   *  |   =    |
 * |--------+------+------+------+------+-------------|                                  |------+------+------+------+------+------+--------|
 * |   tab  |   b  |e_acut|   p  |   o  |e_grav| LEAD |                                  | LEAD |   ^  |   v  |   d  |   l  |   j  |   z    |
 * |--------+------+------+------+------+------|      |                                  |      |------+------+------+------+------+--------|
 * |   W    |   a  |   u  |   i  |   e  |   ,  |------|                                  |------|   c  |   t  |   s  |   r  |   n  |   m    |
 * |--------+------+------+------+------+------| BKSP |                                  | BKSP |------+------+------+------+------+--------|
 * |        |a_grav|   y  |   x  |   .  |   k  |      |                                  |      |   '  |   q  |   g  |   h  |   f  |        |
 * `--------+------+------+------+------+-------------,-------------.      ,-------------`-------------+------+------+------+------+--------'
 *   | Left |  Up  |   %  | PgUp | LDesk|             |      |      |      |      |      |             | RDesk|PgDown| FLOK | Down | Right|
 *   `----------------------------------'      ,------|------|------|      |------+------+------.      `----------------------------------'
 *                                             |      |      |      |      |      |      |      |
 *                                             |      |      |------|      |------|      |      |
 *                                             |      |      |      |      |      |      |      |
 *                                             `--------------------'      `--------------------'
 */
[0] = LAYOUT_ergodox(
//BP_DOLLAR,BP_DQOT,      BP_LGIL,     BP_RGIL,     BP_LPRN,     BP_RPRN,     KC_BSPC,        // left hand
TD_BPESC,   TD_F1,        TD_F2,       TD_F3,       TD_F4,       TD_F5,       BP_EQUAL,
KC_TAB,      BP_B,        BP_ECUT,     BP_P,        BP_O,        BP_EGRV,     _______,
BP_W,        BP_A,        BP_U,        BP_I,        BP_E,        BP_COMMA,n
_______,     BP_AGRV,     BP_Y,        BP_X,        BP_DOT,      BP_K,        _______,
TD_COPY,     TD_PASTE,    BP_PERC,     KC_PGUP,     LWS,
                                                                              _______,     _______,
                                                                                           _______,
                                                                 _______,     _______,     _______,

                          //KC_DEL,    BP_AT,       BP_PLUS,     BP_MINUS,    BP_SLASH,    BP_ASTR,     BP_EQUAL, // right hand
                          KC_DEL,      TD_F6,       TD_F7,       TD_F8,       TD_F9,       TD_F10,      BP_EQUAL, // right hand
                          _______,     BP_DCRC,     BP_V,        BP_D,        BP_L,        BP_J,        BP_Z,
                                       BP_C,        BP_T,        BP_S,        BP_R,        BP_N,        BP_M,
                          _______,     BP_APOS,     BP_Q,        BP_G,        BP_H,        BP_F,        _______,
                                                    RWS,         KC_PGDOWN,   OSL(FLOK),   KC_DOWN,     KC_RIGHT,
_______,     _______,
_______,
_______,     _______,     _______)
};



#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_macros.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"

#ifdef KEYLOGGER_ENABLE
const char* getLayerName(const uint32_t _layerState)
{
  switch (_layerState)
  {
    case BEPOA_: return "BEPOA_";
    case AZERA_: return "AZERA_";
    case QWERA_: return "QWERA_";
  // Combined keymaps states
    case BP____: return "BP____";
    case BPN___: return "BPN___";
    case BEPOAK: return "BEPOAK";
    case QWERAK: return "QWERAK";
    case AZERAK: return "AZERAK";
    case AP____: return "AP____";
    case APN___: return "APN___";
    case QP____: return "QP____";
    case QPN___: return "QPN___";
  }
  return "______";
}
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* keymap 0: default layer
 *
 * ,--------------------------------------------------.                                  ,--------------------------------------------------.
 * |   $    |   "  |   «  |   »  |   (  |   )  |   =  |                                  |Delete|   @  |   +  |   -  |   /  |   *  |   =    |
 * |--------+------+------+------+------+-------------|                                  |------+------+------+------+------+------+--------|
 * |   tab  |   b  |e_acut|   p  |   o  |e_grav| LEAD |                                  | LEAD |   ^  |   v  |   d  |   l  |   j  |   z    |
 * |--------+------+------+------+------+------|      |                                  |      |------+------+------+------+------+--------|
 * |        |   a  |   u  |   i  |   e  |   ,  |------|                                  |------|   c  |   t  |   s  |   r  |   n  |   m    |
 * |--------+------+------+------+------+------| BKSP |                                  | BKSP |------+------+------+------+------+--------|
 * | LShift |a_grav|   y  |   x  |   .  |   k  |      |                                  |      |   '  |   q  |   g  |   h  |   f  | Rshift |
 * `--------+------+------+------+------+-------------,-------------.      ,-------------`-------------+------+------+------+------+--------'
 *   | Left |  Up  |   %  | PgUp | LDesk|             | C+alt|Super |      | Super| C+alt|             | RDesk|PgDown|      | Down | Right|
 *   `----------------------------------'      ,------|------|------|      |------+------+------.      `----------------------------------'
 *                                             |  FN  |      |lctrl |      |rctrl |      |  FN  |
 *                                             | space| Enter|------|      |------|Enter |space |
 *                                             |      |      | lalt |      |altgr |      |      |
 *                                             `--------------------'      `--------------------'
 */
[BEPO] = LAYOUT_ergodox(
//BP_DOLLAR,BP_DQOT,      BP_LGIL,     BP_RGIL,     BP_LPRN,     BP_RPRN,     KC_BSPC,        // left hand
TD_BPESC,    TD_F1,       TD_F2,       TD_F3,       TD_F4,       TD_F5,       BP_EQUAL,
KC_TAB,      BP_B,        BP_ECUT,     BP_P,        BP_O,        BP_EGRV,     KC_LEAD,
BP_W,        BP_A,        BP_U,        BP_I,        BP_E,        BP_COMMA,
KC_LSHIFT,   BP_AGRV,     BP_Y,        BP_X,        BP_DOT,      BP_K,        KC_BSPC,
TD_COPY,     TD_PASTE,    BP_PERC,     KC_PGUP,     LWS,
                                                                              TD_LALT,     KC_LGUI,
                                                                                           LCTLENT,
                                                                 KC_SPC,      KC_ENTER,    TD_LCTRL,
                          //KC_DEL,    BP_AT,       BP_PLUS,     BP_MINUS,    BP_SLASH,    BP_ASTR,     BP_EQUAL, // right hand
                          KC_DEL,      TD_F6,       TD_F7,       TD_F8,       TD_F9,       TD_F10,      BP_EQUAL, // right hand
                          KC_LEAD,     BP_DCRC,     BP_V,        BP_D,        BP_L,        BP_J,        BP_Z,
                                       BP_C,        BP_T,        BP_S,        BP_R,        BP_N,        BP_M,
                          KC_BSPC,     BP_APOS,     BP_Q,        BP_G,        BP_H,        BP_F,        KC_RSHIFT,
                                                    RWS,         KC_PGDOWN,   _______,     KC_DOWN,     KC_RIGHT,
KC_RGUI,     TD_RALT,
RCTLENT,
TD_RCTRL,   KC_ENTER,    KC_SPC),

/* Keymap 2: function
 *
 * ,--------------------------------------------------.                                  ,--------------------------------------------------.
 * | PrntScr|  F1  |  F2  |  F3  |  F4  |  F5  | Mute |                                  |P/Paus|  F6  |  F7  |  F8  |  F9  |  F10 | F11    |
 * |--------+------+------+------+------+-------------|                                  |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |                                  |      |      |      |      |      |      | F12    |
 * |--------+------+------+------+------+------|      |                                  |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|                                  |------|      |      |      |      |      | F13    |
 * |--------+------+------+------+------+------|      |                                  |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |                                  |      |      |      |      |      |      | F14    |
 * `--------+------+------+------+------+-------------,-------------.      ,-------------`-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |             |      |      |      |      |      |             |      |      |      |      | F15  |
 *   `----------------------------------'      ,------|------|------|      |------+------+------.      `----------------------------------'
 *                                             |      |      |      |      |      |      |      |
 *                                             |      |      |------|      |------|      |      |
 *                                             |      |      |      |      |      |      |      |
 *                                             `--------------------'      `--------------------'
 */
[FNCT] = LAYOUT_ergodox(
// Left hand
KC_PSCR,     KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_MUTE,
_______,     _______,     _______,     _______,     _______,     _______,     _______,
_______,     _______,     _______,     _______,     _______,     _______,
_______,     _______,     _______,     _______,     _______,     _______,     _______,
_______,     _______,     _______,     _______,     _______,
                                                                                           _______,     _______,
                                                                                                        _______,
                                                                              _______,     _______,     _______,
// Right hand
                          KC_MPLY,     KC_F6,       KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,
                          _______,     _______,     _______,     _______,     _______,     _______,     KC_F12,
                                       _______,     _______,     _______,     _______,     _______,     KC_F13,
                          _______,     _______,     _______,     _______,     _______,     _______,     KC_F14,
                                                    _______,     _______,     _______,     _______,     KC_F15,
_______,     _______,
_______,
_______,     _______,    _______),

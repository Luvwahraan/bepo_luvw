
#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* keymap 0: default left layer                              *
/* A switch is hidden inside the case: reset.                *
 * ,------+------+------+------+------+------+------+------. *
 * |  $   |"    1|«    2|»    3|(    4|)    5|      |      | *
 * |ESC   |F1    |F2    |F3    |F4    |F5    | DEL  |      | *
 * |------+------+------+------+------+------+------| BKSP | *
 * |COPY  |  TAB |   b  |   é  |   p  |   o  |   è  |______| *
 * |CUT   | LCTL |      |      |      |      |      | RET  | *
 * |------+------+------+------+------+------+------|      | *
 * |PASTE |  TAB |   a  |   u  |   i  |   e  |   ,  |      | *
 * |      | LCTL |      |      |      |      |      | CMP  | *
 * |------+------+------+------+------+------+------|------| *
 * |      |  MAJ |   à  |   y  |   x  |   .  |   k  |  SPC | *
 * |      |      |      |      |      |      |      |      | *
 * `------+------+------+------+------+------+-------------' */
[0] = LAYOUT_ergodox( // left hand
    TD_BPESC,    TD_F1,       TD_F2,       TD_F3,       TD_F4,       TD_F5,       KC_DEL,      KC_BSPC,  
    TD_COPY,     KC_TAB,      BP_B,        BP_ECUT,     BP_P,        BP_O,        BP_EGRV,     _______,
    TD_PASTE,    KC_TAB,      BP_A,        BP_U,        BP_I,        BP_E,        BP_COMMA,    KC_ENTER, 
    _______,     KC_LSHIFT,   BP_AGRV,     BP_Y,        BP_X,        BP_DOT,      BP_K,        KC_SPC
)};

/* keymap 0: default right layer                             *
/* A switch is hidden inside the case: reset.                *
 * ,------+------+------+------+------+------+------+------. *
 * |      |@    6|+    7|-    8|/    9|*    0|=    °|%    `| *
 * |      |F6    |F7    |F8    |F9    |F10   |F11   |F12   | *
 * | BKSP |------+------+------+------+------+------+------| *
 * |______|   ^  |   v  |   d  |   l  |   j  |  z   | UNDO | *
 * | RET  |      |      |      |      |      |      | REDO | *
 * |      |------+------+------+------+------+------+------| *
 * |      |   c  |   t  |   s  |   r  |   n  |  m   | MUTE | *
 * | CMP  |      |      |      |      |      |      | RCTL | *
 * |------+------+------+------+------+------+------+------| *
 * | SPC  |   '  |   q  |   g  |   h  | f    | W    | MAJ  | *
 * |      |      |      |      |      | RALT | RAPP |      | *
 * `--------+------+------+------+------+----+------+------' */
/*[0] = LAYOUT_ergodox(
    KC_DEL,      TD_F6,       TD_F7,       TD_F8,       TD_F9,       TD_F10,      BP_EQUAL,     BP_PERC, // right hand
    _______,     BP_DCRC,     BP_V,        BP_D,        BP_L,        BP_J,        BP_Z,         _______,
    BP_C,        BP_T,        BP_S,        BP_R,        BP_N,        BP_M,        _______,      _______,
    _______,     BP_APOS,     BP_Q,        BP_G,        BP_H,        BP_F,        BP_W,         _______
    //RWS,         KC_PGDOWN,   OSL(FLOK),   KC_DOWN,     KC_RIGHT,    _______,     BP_W,         _______
)};
*/

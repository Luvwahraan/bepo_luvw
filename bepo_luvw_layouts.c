
#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_layouts.h"
#include "bepo_luvw_shortcuts.h"
 
 /* ToDo
  * Mod tap on ENTER
  */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ergodox(
    /* keymap 0: default left layer                              *
    /* QK_BOOT is hidden inside the case.                        *
     * ,------+------+------+------+------+------+------+------. *
     * |  $   |"    1|«    2|»    3|(    4|)    5|      |      | *
     * |ESC   |F1    |F2    |F3    |F4    |F5    | DEL  |      | *
     * |------+------+------+------+------+------+------| BKSP | *
     * |COPY  | TAB  | b    | é    | p    | o    | è    |______| *
     * |CUT   | LCTL |      |      |      |      | PGUP | RET  | *
     * |------+------+------+------+------+------+------|      | *
     * |PASTE | TAB  | a    | u    | i    | e    | ,    |      | *
     * |      | LCTL |      |      |      |      | PGDW | CMP  | *
     * |------+------+------+------+------+------+------|------| *
     * |      | MAJ  | à    | y    | x    | .    | k    | SPC  | *
     * |      |      | LCTL | LALT |      |      |      |      | *
     * `------+------+------+------+------+------+------+------' */
        TD_BPESC,   TD_F1,      TD_F2,      TD_F3,      TD_F4,      TD_F5,      KC_DEL,     KC_BSPC,  
        TD_COPY,    TD_TAB,     BP_B,       BP_ECUT,    BP_P,       BP_O,       TD_EGRV,    QK_BOOT,
        KC_PASTE,   TD_TAB,     BP_A,       BP_U,       BP_I,       BP_E,       TD_COMMA,   TD_ENTER, 
        _______,    TD_LSHIFT,  TD_AGRV,    TD_Y,       BP_X,       BP_DOT,     BP_K,       TD_LLSPC
    ),
[1] = LAYOUT_ergodox(
    /* keymap 1: right on left layer                             *
     * ,------+------+------+------+------+------+------+------. *
     * |@    6|+    7|-    8|/    9|*    0|=    °|%    `|      | *
     * |F6    |F7    |F8    |F9    |F10   |F11   |F12   |      | *
     * |------+------+------+------+------+------+------|      | *
     * | TAB  | ^    | v    | d    | l    | j    |  z   |______| *
     * | LCTL |      |      |      |      |      |      |      | *
     * |------+------+------+------+------+------+------|      | *
     * | TAB  | c    | t    | s    | r    | n    | m    |      | *
     * | LCTL |      |      |      |      |      |      |      | *
     * |------+------+------+------+------+------+------|------| *
     * | MAJ  | '    | q    | g    | h    | f    | W    |      | *
     * |      |      |      |      |      | RALT | APP  |      | *
     * `------+------+------+------+------+------+------+------' */
        TD_F6,      TD_F7,      TD_F8,      TD_F9,      TD_F10,     BP_EQUAL,   BP_PERC,    _______, 
        TD_TAB,     BP_DCRC,    BP_V,       BP_D,       BP_L,       BP_J,       BP_Z,       _______,
        TD_TAB,     BP_C,       BP_T,       BP_S,       BP_R,       BP_N,       BP_M,       _______, 
        TD_LSHIFT,  BP_APOS,    BP_Q,       BP_G,       BP_H,       TD_F,       TD_W,       _______   
    )
};


/*[0] = LAYOUT_ergodox(
    /* keymap 0: default right layer                             *
    /* QK_BOOT is hidden inside the case.                        *
     * ,------+------+------+------+------+------+------+------. *
     * |      |@    6|+    7|-    8|/    9|*    0|=    °|%    `| *
     * |      |F6    |F7    |F8    |F9    |F10   |F11   |F12   | *
     * | BKSP |------+------+------+------+------+------+------| *
     * |______| ^    | v    | d    | l    | j    |  z   | UNDO | *
     * | RET  |      |      |      |      |      |      | EMOJI| *
     * |      |------+------+------+------+------+------+------| *
     * |      | c    | t    | s    | r    | n    | m    | MUTE | *
     * | CMP  | ç    |      |      |      |      |      | RCTL | *
     * |------+------+------+------+------+------+------+------| *
     * | SPC  | '    | q    | g    | h    | f    | W    | MAJ  | *
     * |      |      |      |      |      | RALT | APP  |      | *
     * `------+------+------+------+------+------+------+------' *
        KC_BSPC,    TD_F6,      TD_F7,      TD_F8,      TD_F9,      TD_F10,     BP_EQUAL,   BP_PERC,
        QK_BOOT,    BP_DCRC,    BP_V,       BP_D,       BP_L,       BP_J,       BP_Z,       TD_UNDO,
        TD_ENTER,   BP_C,       BP_T,       BP_S,       BP_R,       BP_N,       BP_M,       TD_MUTE,
        TD_RLSPC,   BP_APOS,    BP_Q,       BP_G,       BP_H,       TD_F,       TD_W,       TD_RSHIFT
    )
};*/

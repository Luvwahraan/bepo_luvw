#ifndef BEPO_LUVW_XORGSHORTS
#define BEPO_LUVW_XORGSHORTS

#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
//#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_layouts.h"


#define BP_COPY     LCTL(BP_C)
#define BP_CUT      LCTL(BP_X)
#define BP_PASTE    LCTL(BP_V)
#define BP_UNDO     LCTL(BP_Z)
#define BP_NEW      LCTL(BP_N)
#define BP_SAVE     LCTL(BP_S)
#define BP_QUIT     LCTL(BP_Q)
#define BP_FIND     LCTL(BP_F)
#define BP_REPL     LCTL(BP_R)

#undef KC_COPY
#undef KC_PASTE
#define KC_COPY     BP_COPY
#define KC_PASTE    BP_PASTE
#define BP_COMPOSE  KC_RGUI
#define BP_LSUPER   KC_LGUI
#define BP_RSUPER   KC_RGUI

#defice BP_EMOJI    (KC_LGUI|BP_DOT)

// Workspaces
#define WSADD       ( KC_LALT | KC_INS )    // add workspace
#define WSDEL       ( KC_LALT | KC_DEL )    // delete workspace
#define LWS         LCA(KC_LEFT)            // go to left workspace
#define RWS         LCA(KC_RIGHT)           // go to right workspace
#define UWS         LCA(KC_UP)              // go to top workspace
#define DWS         LCA(KC_DOWN)            // go to bottom workspace
// Win10 workspaces
#define MOVW        ( KC_LALT + KC_F7 )     // move window
#define RESW        ( KC_LALT + KC_F8 )     // resize window
#define WLWS        (KC_LCTL|KC_GUI|KC_LEFT)// go to left workspace
#define WRWS        (KC_LCTL|KC_GUI|KC_RIGHT)// go to right workspace

#define APPMENU     ( KC_LALT + KC_F1 )     // App menu
#define APPFINDER   ( KC_LALT + KC_F2 )     // App finder
#define BP_XLOCK    LCA(BP_L)


// Keys
#define XXXXXXX     KC_NO

#define LSRA        (QK_LSFT | QK_RALT)
#define LCLA        (QK_LCTL | QK_LALT)

// Keys layers
//#define FN_SPC      LT(FNCT,KC_SPC) // can't work with layers > 16
#define FN_SPC      TD_SPCFN

// Keys mod tap
#define LCLAHM      MT(LCLA,KC_HOME)
#define PLYLGUI     MT(KC_MPLY,KC_LGUI)
#define LCTLENT     MT(KC_LCTL,KC_ENTER)
#define LALTENT     MT(KC_LALT,KC_ENTER)
#define RCTLENT     MT(KC_RCTL,KC_ENTER)
#define RALTENT     MT(BP_ALGR,KC_ENTER)
#define AZERALT     MT(MO(AZ_A),KC_ENTER)
#define LALTSH      MT(LSRA,KC_END)


#endif

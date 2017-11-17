#include "../../ergodone.h"
#include "keymap_bepo.h"
#include "keymap_french.h"
#include "bepo_luvw_shortcuts.h"
//#include "bepo_luvw_tap_dance.h"
#include "bepo_luvw_macros.h"
#include "bepo_luvw_layouts.h"


#define BP_COPY     LCTL(BP_C)
#define BP_PASTE    LCTL(BP_V)
#define BP_UNDO     LCTL(BP_Z)
#define BP_FIND     LCTL(BP_F)
#define BP_REPL     LCTL(BP_R)

#undef KC_COPY
#undef KC_PASTE
#define KC_COPY     BP_COPY
#define KC_PASTE    BP_PASTE

// Workspaces
#define WSADD       ( KC_LALT | KC_INS )    // add workspace
#define WSDEL       ( KC_LALT | KC_DEL )    // delete workspace
#define WS_1        ( KC_LCTRL | KC_F1)     // go to workspace 1
#define WS_2        ( KC_LCTRL | KC_F2)     // go to workspace 2
#define WS_3        ( KC_LCTRL | KC_F3)     // go to workspace 3
#define WS_4        ( KC_LCTRL | KC_F4)     // go to workspace 4
#define WS_5        ( KC_LCTRL | KC_F5)     // go to workspace 5
#define WS_6        ( KC_LCTRL | KC_F6)     // go to workspace 6
#define WS_7        ( KC_LCTRL | KC_F7)     // go to workspace 7
#define WS_8        ( KC_LCTRL | KC_F8)     // go to workspace 8
#define WS_9        ( KC_LCTRL | KC_F9)     // go to workspace 9
#define LWS         LCA(KC_LEFT)            // go to left workspace
#define RWS         LCA(KC_RIGHT)           // go to right workspace
#define UWS         LCA(KC_UP)              // go to top workspace
#define DWS         LCA(KC_DOWN)            // go to bottom workspace

// Windows
#define MOVW        ( KC_LALT + KC_F7 )     // move window
#define RESW        ( KC_LALT + KC_F8 )     // resize window
#define WST1        LCA(KC_KP_1)            // move window to workspace 1
#define WST2        LCA(KC_KP_2)            // move window to workspace 2
#define WST3        LCA(KC_KP_3)            // move window to workspace 3
#define WST4        LCA(KC_KP_4)            // move window to workspace 4
#define WST5        LCA(KC_KP_5)            // move window to workspace 5
#define WST6        LCA(KC_KP_6)            // move window to workspace 6
#define WST7        LCA(KC_KP_7)            // move window to workspace 7
#define WST8        LCA(KC_KP_8)            // move window to workspace 8
#define WST9        LCA(KC_KP_9)            // move window to workspace 9

#define APPMENU     ( KC_LALT + KC_F1 )     // App menu
#define APPFINDER   ( KC_LALT + KC_F2 )     // App finder
#define BP_XLOCK    LCA(BP_L)

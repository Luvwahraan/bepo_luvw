#ifndef BEPO_LUVW_LAYOUTS
#define BEPO_LUVW_LAYOUTS

#include "utils.h"


// Bases keymaps

/* Modifiers keymaps
 * All modifiers layers have to activate some combined layer
 * when alone.
 */
#define MODA 00   // Modifiers A − activ BEPOA_
#define ___B 01   //
#define ___C 02   //
#define ___D 03   //
#define ___E 04   //

// Base layers
#define BEPO 05   // Bépo on bépo map
#define AZER 06   // Bepo on azerty map
#define QWER 07   // QWERTY on BÉPO map
#define ___3 08   //
#define ___4 09   //
#define ___5 10   //
#define ___6 11   //
#define ___7 12   //
#define ___8 13   //
#define ___9 14   //

// Compat keymaps
#define AZ_A 15   // Alt-gr AZER layer
#define AZ_S 16   // Shift AZER layer
#define OPEB 17   // BÉPO mirror
#define QW_S 18   // Shift QWER layer
#define __14 19   //
#define __15 20   //
#define __16 21   //
#define __17 22   //
#define __18 23   //
#define __19 24   //


// Fonctions keymaps
#define FNCT 25   // F and layers keys
#define FLOK 26   // F keys locking layer
#define NLOK 27   // Numkeys locking layer
#define PLAY 28   // No dual funct. or accented
#define NUMK 29   // Right hand numpad

// Specials keymaps
#define LOCK 31   // Locked keyboard
#define NLAY 32   // No a layer, don't use


// Base/Mod combined keymaps states
#define BEPOA_  ( U32(BEPO) | U32(MODA) )
#define AZERA_  ( U32(AZER) | U32(MODA) )
#define QWERA_  ( U32(QWER) | U32(MODA) )

// Combined keymaps states
#define BP____  ( BEPOA_    | U32(PLAY) )
#define BPN___  ( BEPOAK    | U32(PLAY) | U32(NUMK) )
#define BEPOAK  ( U32(BEPO) | U32(MODA) | U32(NUMK) )
#define QWERAK  ( U32(QWER) | U32(MODA) | U32(NUMK) )
#define AZERAK  ( U32(AZER) | U32(MODA) | U32(NUMK) )
#define AP____  ( AZERA_    | U32(PLAY) )
#define APN___  ( AZERAK    | U32(PLAY) | U32(NUMK) )
#define QP____  ( QWERA_    | U32(PLAY) )
#define QPN___  ( QWERAK    | U32(PLAY) | U32(NUMK) )


#endif

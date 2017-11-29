# Having a file like this allows you to override Makefile definitions
# for your own particular keymap

SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
COMMAND_ENABLE   = no  # Commands for debug and configuration
KEY_LOCK_ENABLE  = no
TERMINAL_ENABLE  = no
TAP_DANCE_ENABLE = yes

SRC += utils.c
SRC += bepo_luvw_tap_dance.c
SRC += bepo_luvw_macros.c
SRC += bepo_luvw_leaders.c
SRC += bepo_luvw_layouts.c
SRC += bepo_luvw_shortcuts.c

#ifndef BEPO_LUVW_UTILS
#define BEPO_LUVW_UTILS

#define U32(layer)  (1UL << layer)


uint8_t U8(uint8_t);

enum next_key_down_up
{
    NK_DOWN_UP,
    NK_DOWN,
    NK_UP // a bit of a hack, this works as long as NK_UP < KC_A
};

void send_keystrokes(uint8_t key, ...);

#endif

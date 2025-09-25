#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#ifdef RGB_DI_PIN
#define RGBLED_NUM 0
#endif

#ifndef __GAME_BOARD_CHECK_H__
#define __GAME_BOARD_CHECK_H__

#include <stdbool.h>
#include "game_board_t.h"

bool is_diagonal( Grid_t *game_board );

bool is_horizontal( Grid_t *game_board );

bool is_vertical( Grid_t *game_board );

#endif //__GAME_BOARD_CHECK_H__
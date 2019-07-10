#ifndef __GAME_BOARD_POSITIONS_H__
#define __GAME_BOARD_POSITIONS_H__

#include <stddef.h>
#include "game_board_t.h"

typedef enum _COL_INDEX { A=0, B=1, C=2 } COL_INDEX;
typedef enum _BOARD_COMPONENT { ROW, COL } BOARD_COMPONENT;

size_t get_random_row(Grid_t *game_board);

size_t get_random_col(Grid_t *game_board);

size_t get_row_position();

size_t get_col_position();

size_t get_position( BOARD_COMPONENT axis );

size_t translate_to_col_index( char letter );

#endif //__GAME_BOARD_POSITIONS_H__
#ifndef __GAME_BOARD_FUNCTS_H__
#define __GAME_BOARD_FUNCTS_H__

#include <stddef.h>
#include "game_board_t.h"

char get_current_player_piece( Grid_t *game_board );

void switch_player( Grid_t *game_board );

void print_col_legend();

void print_row_legend(size_t row);

void print_board_marker(char marker);

void print_dividing_bar();

void print_newline();

#endif //__GAME_BOARD_FUNCTS_H__
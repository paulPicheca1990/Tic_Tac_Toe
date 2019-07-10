#ifndef __GAME_BOARD_DISPLAY_H__
#define __GAME_BOARD_DISPLAY_H__

#include <stddef.h>
#define DIVIDING_BAR "-------------------------------------------------------------"

void print_col_legend();

void print_row_legend(size_t row);

void print_board_marker(char marker);

void print_dividing_bar();

void print_newline();

void print_position_in_use();

void print_ais_turn();

#endif //__GAME_BOARD_DISPLAY_H__
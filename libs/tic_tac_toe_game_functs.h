#ifndef __TIC_TAC_TOE_GAMEPLAY_FUNCTS_H__
#define __TIC_TAC_TOE_GAMEPLAY_FUNCTS_H__

#include <stddef.h>
#include "game_board_t.h"

size_t get_row(Grid_t *game_board);

size_t get_col(Grid_t *game_board);

void simulate_tic_tac_toe( Grid_t *game_board );

void play_tic_tac_toe( Grid_t *game_board );

#endif //__TIC_TAC_TOE_GAMEPLAY_FUNCTS_H__
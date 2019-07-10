#include <stdio.h>
#include "../libs/game_board_display.h"
#include "../libs/game_board_positions.h"
#include "../libs/tic_tac_toe_game_functs.h"

void make_move( Grid_t *game_board, size_t row_value, size_t col_value ){
  if( mark_board(game_board, row_value, col_value ) )
    draw_board(game_board);            
  else 
    print_position_in_use();
}

void play_tic_tac_toe( Grid_t *game_board ) {
  make_move(game_board, get_position(ROW), get_position(COL));  
}

void simulate_tic_tac_toe( Grid_t *game_board ) {
  if( game_board->is_player_1s_turn )  
    play_tic_tac_toe(game_board);
  else {
    print_ais_turn();
    make_move(game_board, get_random_row(game_board), get_random_col(game_board));
  }
    
}
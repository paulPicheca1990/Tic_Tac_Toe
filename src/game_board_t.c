#include <stdio.h>
#include "../libs/game_board_t.h"
#include "../libs/game_board_check.h"
#include "../libs/game_board_functs.h"
#include "../libs/game_board_display.h"

Grid_t Grid_T() {
  return (Grid_t){ 
    .is_player_1s_turn=false,
    .rows=ROWS,
    .cols=COLS,
    .slots={ 
      { EMPTY_COL, EMPTY_COL, EMPTY_COL }, 
      { EMPTY_COL, EMPTY_COL, EMPTY_COL }, 
      { EMPTY_COL, EMPTY_COL, EMPTY_COL } 
  }};
}

bool is_there_a_winner( Grid_t *game_board ){
  return ( is_vertical(game_board) | is_horizontal(game_board) | is_diagonal(game_board) );
}

bool board_has_available_slots( Grid_t *game_board ) {
  int row_index, col_index;
  for( row_index = 0; row_index < game_board->rows; row_index++ )
    for( col_index = 0; col_index < game_board->cols; col_index++ )
      if( game_board->slots[row_index][col_index] == EMPTY_COL )
        return true;

  return false;
}

bool mark_board(Grid_t *game_board, size_t row, size_t col ){  
  if( game_board->slots[row][col] == EMPTY_COL ) {
    game_board->slots[row][col] = get_current_player_piece(game_board);    
    return true;
  }

  return false;
}

char get_winner( Grid_t *game_board ){
  return ( !game_board->is_player_1s_turn ) ? PLAYER_X : PLAYER_O;
}

void draw_board( Grid_t *game_board ) {    
  int row_index, col_index, current_row = 1;
  
  print_col_legend();
  for( row_index = 0; row_index < game_board->rows; row_index++ ){
    print_row_legend( current_row++ );
    for( col_index = 0; col_index < game_board->cols; col_index++ )    
      print_board_marker(game_board->slots[row_index][col_index]);
    print_newline();
    print_dividing_bar();
  }
  print_newline();

  switch_player(game_board);
}
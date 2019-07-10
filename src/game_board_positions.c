#include <stdio.h>
#include <ctype.h>
#include "../libs/random_number.h"
#include "../libs/game_board_positions.h"

size_t get_random_row(Grid_t *game_board) {
  return get_random_number(game_board->rows * game_board->rows)%game_board->rows;
}

size_t get_random_col(Grid_t *game_board) {
  return get_random_number(game_board->cols * game_board->cols)%game_board->cols;
}

size_t get_row_position() {
  size_t row = 0;

  printf( "Please enter a valid row number {1 to 3}: " );
  scanf( "%d", &row );

  return row - 1;
}

size_t get_col_position() {  
  char letter = ' ';
  printf( "Please enter a valid col letter {A, B, or C}: " );
  scanf( " %c", &letter );

  size_t col = translate_to_col_index( letter );
  return col;
}

size_t get_position( BOARD_COMPONENT axis ) {  
  size_t position;

  switch( axis ){
    case ROW:
      position = get_row_position();
      break;
    case COL:
      position = get_col_position();  
      break;
    default:      
      break;
  }  
    
  return position; 
}

size_t translate_to_col_index( char letter ) {
  size_t index;
  switch( toupper(letter) ){
    case 'A':
      index = A;
      break;      
    case 'B':
      index = B;
      break;
    case 'C':
      index = C;
      break;
    default:
      index = 0;
      break;
  }
  return index;
}
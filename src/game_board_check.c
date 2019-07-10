#include "../libs/comparison.h"
#include "../libs/game_board_check.h"

bool is_diagonal( Grid_t *game_board ){
  return (
    all_elements_are_equal(3 , game_board->slots[0][0], game_board->slots[1][1], game_board->slots[2][2] ) &&
    all_elements_do_not_equal_target(EMPTY_COL, 3 , game_board->slots[0][0], game_board->slots[1][1], game_board->slots[2][2] )
  ) || (
    all_elements_are_equal(3 , game_board->slots[2][0], game_board->slots[1][1], game_board->slots[0][2] ) &&
    all_elements_do_not_equal_target(EMPTY_COL, 3 , game_board->slots[0][0], game_board->slots[1][1], game_board->slots[2][2] ) );
}

bool is_horizontal( Grid_t *game_board ){  
  int index;
  for( index = 0; index < game_board->rows; index++ )
    if( all_elements_are_equal(3, game_board->slots[index][0], game_board->slots[index][1], game_board->slots[index][2] ) &&
        all_elements_do_not_equal_target(EMPTY_COL, 3 , game_board->slots[index][0], game_board->slots[index][1], game_board->slots[index][2] ) )
      return true;
  
  return false;
}

bool is_vertical( Grid_t *game_board ){  
  int index;
  for( index = 0; index < game_board->rows; index++ )
    if( all_elements_are_equal(3, game_board->slots[0][index], game_board->slots[1][index], game_board->slots[2][index] ) &&
        all_elements_do_not_equal_target(EMPTY_COL, 3 , game_board->slots[0][index], game_board->slots[1][index], game_board->slots[2][index] ) )
      return true;
  
  return false;
}
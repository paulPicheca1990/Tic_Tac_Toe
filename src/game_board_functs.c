#include "../libs/game_board_functs.h"

char get_current_player_piece( Grid_t *game_board ){
  return ( game_board->is_player_1s_turn ) ? PLAYER_X : PLAYER_O;
}

void switch_player( Grid_t *game_board ){
  game_board->is_player_1s_turn = !game_board->is_player_1s_turn;
}
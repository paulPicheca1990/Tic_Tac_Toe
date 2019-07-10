#include <stdio.h>
#include "../libs/tic_tac_toe.h"
#include "../libs/tic_tac_toe_game_functs.h"

void play_game( bool simulate ) {
  Grid_t game_board = Grid_T();
  bool winner;

  draw_board(&game_board);
  do{
    if( simulate )
      simulate_tic_tac_toe(&game_board);
    else
      play_tic_tac_toe(&game_board);
    
  } while( !(winner = is_there_a_winner(&game_board)) && board_has_available_slots(&game_board) );  

  if( winner )
    printf( "The winner is: %c\n", get_winner(&game_board) );
  else
    printf( "It is a stalemate... Sorry!\n" );  
}
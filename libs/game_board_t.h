#ifndef __GAME_BOARD_T_H__
#define __GAME_BOARD_T_H__

#include <stdbool.h>

#define ROWS 3
#define COLS 3
#define EMPTY_COL '-'
#define PLAYER_X 'X'
#define PLAYER_O 'O'

typedef struct _Grid_t {
  bool is_player_1s_turn;
  int rows;
  int cols;
  char slots [ ROWS ][ COLS ];    
} Grid_t;

Grid_t Grid_T();

bool is_there_a_winner( Grid_t *game_board );

bool board_has_available_slots( Grid_t *game_board );

bool mark_board( Grid_t *game_board, size_t row, size_t col );

char get_winner( Grid_t *game_board );

void draw_board( Grid_t *game_board );

#endif //__GAME_BOARD_T_H__
#include <stdio.h>
#include "../libs/game_board_display.h"

void print_col_legend() {  
  printf("\n  %-3c  %-6c  %-6c  %-6c\n", ' ', 'A', 'B', 'C');
  print_dividing_bar();  
}

void print_row_legend(size_t row) {
  printf( "%2.2d | ", row );
}

void print_board_marker(char marker) {
  printf( "  %-2c  | ", marker);
}

void print_dividing_bar() {
  char *bar = DIVIDING_BAR;
  printf("%.28s\n", bar);
}

void print_newline() {
  printf( "\n" );
}

void print_position_in_use() {
  printf( "\n%s\n%s\n\n",
      "Sorry!... That position has already been played.", 
      "Please enter a new position." );
}

void print_ais_turn() {
  printf( "\n%s\n\n", "The AI will now make a move..." );
}
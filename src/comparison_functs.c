#include "../libs/malloc.h"
#include "../libs/comparison_functs.h"

bool are_all_values_equal( char *values, size_t number_of_elements ){
  bool are_all_elements_equal = true;

  int current_index, compare_index;
  for( current_index = 0; current_index < number_of_elements; current_index++ )
    for( compare_index = current_index + 1; compare_index < number_of_elements; compare_index++ )      
        are_all_elements_equal &= (values[current_index] == values[compare_index]);

  return are_all_elements_equal;
}

bool all_elements_dne_target( char target, char *values, size_t number_of_elements ){
  bool elements_dne_target = true;

  int current_index;
  for( current_index = 0; current_index < number_of_elements; current_index++ )
    elements_dne_target &= ( values[current_index] != target );

  return elements_dne_target;
}
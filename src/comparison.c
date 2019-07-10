#include "../libs/comparison.h"
#include "../libs/comparison_functs.h"

bool all_elements_are_equal( size_t number_of_elements, ... ){
  char *values;
  bool elements_are_equal;
  va_list valist;  
  
  va_start(valist, number_of_elements);
  values = parse_va_list( number_of_elements, valist );
  elements_are_equal = are_all_values_equal(values, number_of_elements);  
  free(values);

  return elements_are_equal;
}


bool all_elements_do_not_equal_target( char target, size_t number_of_elements, ... ){
  char *values;
  bool elements_do_not_equal_target;
  va_list valist;  
  
  va_start(valist, number_of_elements);
  values = parse_va_list( number_of_elements, valist );
  elements_do_not_equal_target = all_elements_dne_target(target, values, number_of_elements);  
  free(values);

  return elements_do_not_equal_target;
}


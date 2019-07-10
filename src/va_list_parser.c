#include <stdbool.h>
#include "../libs/malloc.h"
#include "../libs/va_list_parser.h"

char *parse_va_list( size_t number_of_elements, va_list valist ){
  char *values = new( char, number_of_elements );  
  char *cursor = values;
  
  int index; 
  for( index = 0; index < number_of_elements; index++ ){    
    cursor[index] = va_arg(valist, int);
  }  
  va_end(valist);  

  return values;
}
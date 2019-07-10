#ifndef __COMPARISON_H__
#define __COMPARISON_H__

#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>
 
bool all_elements_are_equal( size_t number_of_elements, ... );

bool all_elements_do_not_equal_target( char target, size_t number_of_elements, ... );

#endif //__COMPARISON_H__
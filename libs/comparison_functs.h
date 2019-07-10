#ifndef __COMPARISON_FUNCTS_H__
#define __COMPARISON_FUNCTS_H__

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>

char *parse_va_list( size_t number_of_elements, va_list valist );

bool are_all_values_equal( char *values, size_t number_of_elements );

bool all_elements_dne_target( char target, char *values, size_t number_of_elements );

#endif //__COMPARISON_FUNCTS_H__
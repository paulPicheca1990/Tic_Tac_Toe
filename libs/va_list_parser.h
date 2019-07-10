#ifndef __VA_LIST_PARSER_H__
#define __VA_LIST_PARSER_H__

#include <stddef.h>
#include <stdarg.h>

char *parse_va_list( size_t number_of_elements, va_list valist );

#endif //__VA_LIST_PARSER_H__
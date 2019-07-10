#ifndef __MALLOC_H__
#define __MALLOC_H__

#include <stdlib.h>
#include <stddef.h>
#include "type_checking.h"

#define new(type, number_of_elements)\
(\
(type *) malloc( sizeof(type) * (  is_the_same_datatype( (char)'c' , type )  ? (number_of_elements + 1) : (number_of_elements) ) )\
)

#endif //__MALLOC_H__
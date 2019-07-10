#ifndef __TYPE_CHECKING_H__
#define __TYPE_CHECKING_H__

#define is_the_same_datatype(x, type) _Generic(x, type: true, default: false)

#endif //__TYPE_CHECKING_H__
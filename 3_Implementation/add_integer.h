#ifndef _ADD_INTEGER_H_
#define _ADD_INTEGER_H_

#include <stdio.h>
#include <limits.h>

typedef enum funtion_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}
funtion_status_t;

funtion_status_t add_integers(int param1, int param2, int result);

#endif  
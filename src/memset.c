#include "ourstring.h"

void *our_memset( void *pointer, int value, size_t count ){
    if (pointer == 0)
        return 0;
    char *p = pointer;
    while (count--)
        *p++ = value;
    return pointer;
}
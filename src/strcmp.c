#include "ourstring.h"
#include <stdlib.h>


int our_strcmp(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
        return -1;
    while (*s1 && *s1 == *s2)
        s1++, s2++;
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}
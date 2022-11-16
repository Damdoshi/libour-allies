#include "ourstring.h"

int our_memcmp(const void *s1, const void *s2, size_t n)
{
    if (s1 == 0 || s2 == 0)
        return 0;
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    while (n-- > 0) {
        if (*p1++ != *p2++)
            return *--p1 - *--p2;
    }
    return 0;
}
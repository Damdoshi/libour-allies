#include "ourstring.h"


char *our_strcpy(char *dest, const char *src)
{
    if (src == NULL||dest == NULL){
        return 0;
    }
    char *save = dest;
    while(*dest++ = *src++);
    return save;
}

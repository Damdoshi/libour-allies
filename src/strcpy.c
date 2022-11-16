#include <stdio.h>
#include <stdlib.h>
#include "ourstring.h"

char *our_strcpy(const char *s)
{
    if(s == NULL){
        return NULL;
    }
    char *d = malloc(sizeof(s));
    for(int i = 0; i < our_strlen(s); i++) {
        d[i] = s[i];
    }
    return d;
}

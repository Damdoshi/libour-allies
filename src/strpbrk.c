#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ourstring.h"

char * our_strpbrk(char *string, char *searchedchar)
{
    char *p;
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (p = searchedchar; *p != '\0'; p++)
        {
            if (string[i] == *p) 
            return &string[i];
        }
    }
    return NULL;
}
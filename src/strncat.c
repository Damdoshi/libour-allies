#include <stdlib.h>

char * our_strncat(char *dest, char *src, int n)
{
    if ( NULL == dest || NULL == src ) { return (NULL);}
    int i, j;
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return dest;
}
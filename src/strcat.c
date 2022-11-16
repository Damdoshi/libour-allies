#include "ourstring.h"
#include <stdlib.h>

char *our_strcat(char *dest, const char *src){
    if ( NULL == dest || NULL == src ) { return (NULL);}
    efassert( "src is null ", src, return (NULL));
    char *tmp = NULL;
    tmp = (char *) malloc(our_strlen(dest));
    for(size_t i=0; i < our_strlen(dest); i++) { *(tmp+i)=dest[i];}
    *(tmp+our_strlen(dest))='\0';
    for(size_t a=0; a < our_strlen(src); a++){ *(dest+a)=src[a];}
    size_t c = 0;
    for(size_t b=our_strlen(src); b < our_strlen(dest); b++){ *(dest+b)=tmp[c];c++;}
    free(tmp);
    return dest;
}
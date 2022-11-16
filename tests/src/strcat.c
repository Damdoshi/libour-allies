#include <stdlib.h>
#include "ourstring.h"

int main(void){
    const char* src = "hel";
    char* dest;
    dest = (char*)malloc(6);
    dest[0] = 'l';
    dest[1] = 'o';
    dest[6] = '\0';
    char* dest_n = NULL;
    assert(our_strcat(dest, src)[0] == 'h');
    assert(our_strcat(dest_n, src) == NULL);
    free(dest);
    return (EXIT_SUCCESS);
}
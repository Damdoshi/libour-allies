#include <stdlib.h>
#include "ourstring.h"

char* our_strdup(char *sample) 
{
    if (sample == NULL)
        return NULL;
        
    char *copy;
    int i ,taille = 0;

    //------ la taille ------//
    while (*(sample + taille) != '\0') {
        taille++;
    }

    //------ Malloc ------//
    copy = malloc(sizeof(char*[taille+1]));
    if (copy == NULL)
        return NULL;
    
    //------ Duplicate ------//
    for(i=0 ; i < taille; i++) {
        copy[i] = sample[i];
    }
    copy[taille+1] = '\0';

    return copy;
}

#include "ourstring.h"

int our_strrchr(char *string, char *cible) {
    if (string == 0 || cible == 0)
        return 0;
    if (string == 0 || cible == 0 )
        return 0;
    int lencible = our_strlen(cible);
    if (lencible > 1)
        return 0;

    int len = 0;
    int result = 0;
    int i = 0;
    int c = cible[0];

    
    while(string[len] != '\0')
        len++;
    for (i = 0 ; i <= len ; i++)
        if (string[i] == c)
            result = i + 1;
    return result;
    
}
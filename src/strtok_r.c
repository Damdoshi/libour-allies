#include "ourstring.h"
#include <stdlib.h>


char * our_strtok_r(char *str, const char *delim, char **saveptr){
    char *token;
    if (str == 0)
        str = *saveptr;
    str += strspn(str, delim);
    if (*str == '\0'){ 
        *saveptr = str;
        return 0;
    }
    token = str;
    str = strpbrk(token, delim);
    if (str == 0){
        *saveptr = strchr(token, '\0');
    }
    else {
        *str = '\0';
        *saveptr = str + 1;
    }
    return token;
}

/*int main()
{
    char str[] = "This is a test";
    char *saveptr;
    char *token = our_strtok_r(str, " ", &saveptr);
    while (token != NULL){
        printf("%s\n", token);
        token = our_strtok_r(NULL, " ", &saveptr);
    }
    return 0;
}*/


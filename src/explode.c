#include "ourstring.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *strdup(const char *src)
{
    char *tmp = malloc(strlen(src) + 1);
    if(tmp)
        strcpy(tmp, src);
    return tmp;
}

int our_explode(const char *src, const char *tokens, char ***list, size_t *len)
{   
    efassert("src is NULL", src, return(-1));
    efassert("tokens is NULL", tokens, return(-1));
    efassert("list is NULL", list, return(-1));
    efassert("len is NULL", len, return(-1));
    efassert("tokens is empty", strlen(tokens), return(-1));
    efassert("src is empty", strlen(src), return(-1));

    char *str, *copy, **_list = NULL, **tmp;
    *list = NULL;
    *len  = 0;

    copy = strdup(src);
    if(copy == NULL)
        return -1;

    str = strtok(copy, tokens);
    if(str == NULL) {
        return -1;
    }

    _list = realloc(NULL, sizeof *_list);
    if(_list == NULL) {
        return -1;
    }

    _list[*len] = strdup(str);
    if(_list[*len] == NULL) {
        return -1;
    }
    (*len)++;


    while((str = strtok(NULL, tokens)))
    {
        tmp = realloc(_list, (sizeof *_list) * (*len + 1));
        if(tmp == NULL) {
            return -1;
        }
        _list = tmp;

        _list[*len] = strdup(str);
        if(_list[*len] == NULL) {
            return -1;
        }
        (*len)++;

    }

    *list = _list;
    free(copy);
    return 0;
}
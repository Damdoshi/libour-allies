#include <stdlib.h>
#include <string.h>
#include "ourstring.h"

int main (void)
{
    char src[50] = "abc";
    char dest[50]= "def";
    char *dest_null = NULL;
    char dest_void[50] = "";
    char *src_null = NULL;
    char src_void[50] = "";
    assert(our_strncat(src, dest, 1) == strncat(src, dest, 1));
    assert(our_strncat(dest_null, src, 1) == NULL);
    assert(our_strncat(src, dest, 10) == strncat(src, dest, 10));
    assert(our_strncat(dest_void, src, 1) == strncat(dest_void, src, 1));
    assert(our_strncat(src, dest, 0) == strncat(src, dest, 0));
    assert(our_strncat(dest_void, src, 0) == strncat(dest_void, src, 0));
    assert(our_strncat(src_null, dest, 1) == NULL);
    assert(our_strncat(src_void, dest, 1) == strncat(src_void, dest, 1));

}
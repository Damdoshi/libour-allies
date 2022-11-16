#include <stdlib.h>
#include "ourstring.h"

int main() 
{
    char *ref;
    char *test;

    ref = "abcdefghijklmnop";
    test = our_strdup(ref);

    assert(ref[1] == 'b');
    assert(ref[4] == 'e');
    assert(ref[0] == 'a');
    assert(ref[5] == 'f');

    free(test);
    return 0;
}
#include <stdlib.h>
#include "ourstring.h"

int main()
{
    assert(our_strcmp("abc", "abc") == 0);
    assert(our_strcmp("abc", "abd") < 0);
    assert(our_strcmp("abd", "abc") > 0);
    assert(our_strcmp("abc", "ab") > 0);
    assert(our_strcmp("ab", "abc") < 0);
    assert(our_strcmp("abc", "abcd") < 0);
    assert(our_strcmp(NULL, "abcd") == -1);
    return (EXIT_SUCCESS);
}
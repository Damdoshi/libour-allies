#include <string.h>
#include "ourstring.h"


int main(void) {
    // test our_memset
    char str[] = "abcd";
    assert(strcmp((*char)our_memset(str, 't', 3), "tttd") == 0);
    str = "abcd";
    assert(strcmp((*char)our_memset(str, 't', 0), "abcd") == 0);
    str = "abcd";
    assert(strcmp((*char)our_memset(str, 't', 4), "tttt") == 0);
    assert(our_memset(NULL, 'x', 4) == 0);

    return EXIT_SUCCESS;
}
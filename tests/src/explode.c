#include	"ourstring.h"
#include	<stdlib.h>
#include	<unistd.h>
#include	<string.h>

int main() {
    assert(our_explode(' ', NULL) == 0);
    assert(strcmp(our_explode(' ', "")[0], "") == 0);
    assert(strcmp(our_explode(' ', "")[0], "") == 0);
    
    assert(strcmp(our_explode(';', "this;is;a;test")[0], "this") == 0);
    assert(strcmp(our_explode(';', "this;is;a;test")[1], "is") == 0);
    assert(strcmp(our_explode(';', "this;is;a;test")[2], "a") == 0);
    assert(strcmp(our_explode(';', "this;is;a;test")[3], "test") == 0);


    return EXIT_SUCCESS;
}
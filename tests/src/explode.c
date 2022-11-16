#include	"ourstring.h"
#include	<stdlib.h>
#include	<unistd.h>
#include	<string.h>

int main() {
    char **list;
    size_t len;
    
    assert(our_explode("Hello World", " ", &list, &len) == 0);
    assert(len == 2);
    assert(strcmp(list[0], "Hello") == 0);
    assert(strcmp(list[1], "World") == 0);

    assert(our_explode("this;is;a;test", ";", &list, &len) == 0);
    assert(len == 4);
    assert(strcmp(list[0], "this") == 0);
    assert(strcmp(list[1], "is") == 0);
    assert(strcmp(list[2], "a") == 0);
    assert(strcmp(list[3], "test") == 0);

    assert(our_explode(NULL, " ", &list, &len) == -1);
    assert(our_explode("Hello World", NULL, &list, &len) == -1);
    assert(our_explode("Hello World", " ", NULL, &len) == -1);
    assert(our_explode("Hello World", " ", &list, NULL) == -1);
    assert(our_explode(NULL, NULL, NULL, NULL) == -1);

    assert(our_explode("Test", "", &list, &len) == -1);
    assert(our_explode("", " ", &list, &len) == -1);
    assert(our_explode("", "", &list, &len) == -1);

    return EXIT_SUCCESS;
}
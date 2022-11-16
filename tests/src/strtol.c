#include <stdlib.h>
#include <stdio.h>
#include "ourstring.h"

int main(void){
    char *end;
    assert(our_strtol("123", &end, 0) == 123);
    assert(our_strtol("123", &end, 10) == 123);
    assert(our_strtol("123", &end, 8) == 83);
    assert(our_strtol("123", &end, 16) == 291);
    assert(our_strtol("0x123", &end, 0) == 291);
    assert(our_strtol("0x123", &end, 10) == 0);
    assert(our_strtol("0x123", &end, 8) == 0);
    assert(our_strtol("0x123", &end, 16) == 291);
    assert(our_strtol("0123G", &end, 0) == 83);
    assert(our_strtol("-333", &end, 0) == -333);
    assert(our_strtol("+333", &end, 0) == 333);
    assert(our_strtol("++333", &end, 0) == 0);
    assert(our_strtol("--333", &end, 0) == 0);
    return(EXIT_SUCCESS);
}
#include <stdlib.h>
#include "ourstring.h"

int main(void)
{
    assert(our_atof("123.333") > 123.300);
    assert(our_atof("-123.333") < 123.300);
    assert(our_atof("abc\0def") == 1);
    assert(our_atof("") == 2);
    assert(our_atof(NULL) == 3);
    return (EXIT_SUCCESS);
}
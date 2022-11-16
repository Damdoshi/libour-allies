#include	<stdlib.h>
#include	"ourstring.h"

int		main(void)
{
    assert(our_atoi("123") == 123);
    assert(our_atoi("-123") == -123);
    assert(our_atoi("0") == 0);
    assert(our_atoi(NULL) == 0);
    return (EXIT_SUCCESS);
}
#include	<stdlib.h>
#include	"ourstring.h"

int main(void)
{
    // test our_memcmp
    assert(our_memcmp("ceciest1test", "ceciest1test", 12) == 0);
    assert(our_memcmp("ceciest1test", "ceciest1tesx", 12) == -1);
    assert(our_memcmp("ceciest1tesx", "ceciest1test", 12) == 1);
    assert(our_memcmp("ceciest1test", "rceciest1tes", 0) == 0);
    // test efassert(0)
    assert(our_memcmp("ceciest1test", 0, 12) == 0);
    assert(our_memcmp(0, "ceciest1test", 12) == 0);
    assert(our_memcmp(0, 0, 12) == 0);
    return (EXIT_SUCCESS);
}
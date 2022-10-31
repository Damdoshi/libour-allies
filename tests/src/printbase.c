

#include	"ourstring.h"
#include	<stdlib.h>
#include	<unistd.h>

int main() {
    assert(our_printbase(0, 10) == 1);
    assert(our_printbase(-2, 10) == 2);
    assert(our_printbase(123456, -10) == -1);
    assert(our_printbase(123456, 62) == 3);
    assert(our_printbase(123456, 63) == -1);
    assert(our_printbase(123456, 0) == -1);
    assert(our_printbase(123456, 1) == -1);
}
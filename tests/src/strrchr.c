#include	<stdlib.h>
#include	"ourstring.h"

int main() {
    assert(our_strrchr("bonjour","r") == 7);
    assert(our_strrchr("boujour","a") == 0);
    assert(our_strrchr("00", "0") == 2);
    return (EXIT_SUCCESS);
}
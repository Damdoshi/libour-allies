#include	<stdlib.h>
#include	"ourstring.h"

int main() {
    assert(our_strrchr("bonjour","r") == 7);
    assert(our_strrchr("boujour","a") == 0);
    assert(our_strrchr("00", "0") == 2);
    assert(our_strrchr("bonjour",NULL) == 0);
    assert(our_strrchr(NULL,NULL) == 0);
    assert(our_strrchr("hey","100") == 0);
    assert(our_strrchr(NULL,"a") == 0);
    return (EXIT_SUCCESS);
}

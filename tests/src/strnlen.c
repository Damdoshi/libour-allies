#include	<stdlib.h>
#include	"ourstring.h"

int		main(void)
{
  assert(our_strnlen("abc",3) == 3);
  assert(our_strnlen("abcdef",4) == 4);
  assert(our_strnlen("",5) == 0);
  assert(our_strnlen(NULL,5) == 0);
  return (EXIT_SUCCESS);
}


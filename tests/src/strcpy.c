#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "ourstring.h"

int	main(void)
{
  const char src[4] = "ABC";
  char dest[4];
  our_strcpy(dest,src);
  assert(strcmp(dest,"ABC")==0);
  return (EXIT_SUCCESS);
}

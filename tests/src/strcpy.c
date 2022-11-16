#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "ourstring.h"

int	main(void)
{
  const char *source = "abc";
  char *dest = (our_strcpy(source));
  int result = 0;
  if(*dest++ == *source++){
    result = 1;
  }
  assert(result == 1);
  result = 0;

  const char *source2 = "abc\0def";
  char *dest2 = (our_strcpy(source2));
  if(*dest2++ == *source2++){
    result = 1;
  }
  assert(result == 1);
  result = 0;

  const char *source3 = "1";
  char *dest3 = (our_strcpy(source3));
  if(*dest3++ == *source3++){
    result = 1;
  }
  assert(result == 1);
  result = 0;

  return (EXIT_SUCCESS);
}
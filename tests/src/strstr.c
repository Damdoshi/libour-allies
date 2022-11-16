#include	<stdlib.h>
#include	<string.h>
#include	"ourstring.h"

int	main(void){
  assert(strcmp(our_strstr("Hello World", "World"), "World") == 0);
  assert(strcmp(our_strstr("Hello World", "Hello"), "Hello World") == 0);
  assert(strcmp(our_strstr("Hello World", "Hello World"), "Hello World") == 0);
  assert(strcmp(our_strstr("Hello World", "Hello World!"), NULL) == 0);
  assert(strcmp(our_strstr("Hello World", "salut"), NULL) == 0);
  assert(strcmp(our_strstr("Hello World", "Hello World Hello World"), NULL) == 0);
  return (EXIT_SUCCESS);
}

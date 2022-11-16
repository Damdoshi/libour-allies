#include	<stdlib.h>
#include	"ourstring.h"

int	main(void){
  assert(our_strstr("Hello World", "World") == "World");
  assert(our_strstr("Hello World", "Hello") == "Hello World");
  assert(our_strstr("Hello World", "Hello World") == "Hello World");
  assert(our_strstr("Hello World", "Hello World!") == NULL);
  assert(our_strstr("Hello World", "salut") == NULL);
  assert(our_strstr("Hello World", "Hello World Hello World") == NULL);
  return (EXIT_SUCCESS);
}


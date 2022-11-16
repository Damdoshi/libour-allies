#include	<stdlib.h>
#include	"ourstring.h"

int		main(void)
{
  char str[] = "This is a test";
  char *saveptr;
  char *token = our_strtok_r(str, " ", &saveptr);
  assert(strcmp(token, "This") == 0);
  assert(strcmp(saveptr, "is a test") == 0);
  token = our_strtok_r(NULL, " ", &saveptr);
  assert(strcmp(token, "is") == 0);
  assert(strcmp(saveptr, "a test") == 0);
  token = our_strtok_r(NULL, " ", &saveptr);
  assert(strcmp(token, "a") == 0);
  assert(strcmp(saveptr, "test") == 0);
  token = our_strtok_r(NULL, " ", &saveptr);
  assert(strcmp(token, "test") == 0);
  assert(strcmp(saveptr, "") == 0);
  token = our_strtok_r(NULL, " ", &saveptr);
  assert(token == NULL);
  return (EXIT_SUCCESS);
}


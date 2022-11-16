#include  <stdlib.h>
#include  <string.h>
#include  "ourstring.h"

int main(void){
  char  *str = "Hello World!";
  char  *str2 = "World";
  assert(our_strstr(str, str2) == str+6);
  assert(our_strstr(str, "Hello") == str);
  assert(our_strstr(str, "World!") == str+6);
  assert(our_strstr(str, "World!!") == 0);
  assert(our_strstr(str, "Hello World!") == str);
  assert(our_strstr(0, "Hello World!!") == 0);
  assert(our_strstr(str, 0) == 0);
  assert(our_strstr(0, 0) == 0);
  return (EXIT_SUCCESS);
}

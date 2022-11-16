#include "ourstring.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  assert(our_strcspn("ceciest1test", "1") == 7);
  assert(our_strcspn("ceciest1test", "c") == 0);
  assert(our_strcspn("ceciest1test", "z") == 12);
  assert(our_strcspn("ceciest1test", "t") == 6);
  return EXIT_SUCCESS;
}

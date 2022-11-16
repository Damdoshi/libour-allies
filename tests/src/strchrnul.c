#include "ourstring.h"
#include <stdlib.h>

int main(void) {
  assert(our_strchrnul("ABC", 'A') == "ABC");
  assert(our_strchrnul("ABC", 'B') == "BC");
  return (EXIT_SUCCESS);
}

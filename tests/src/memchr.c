#include "ourstring.h"
#include <stdlib.h>

int main(void) {

  /* Test basique */

  char data1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  void *found1 = our_memchr(data1, 30, 10);
  assert(*((char *)found1) == 30);

  void *found2 = our_memchr(data1, 10, 10);
  assert(*((char *)found2) == 10);

  void *found3 = our_memchr(data1, 30, 0);
  assert(found3 == NULL);

  char data2[] = {'\0'};

  void *found4 = our_memchr(data2, 30, 10);
  assert(found4 == NULL);

  void *found5 = our_memchr(data2, 10, 0);
  assert(found5 == NULL);

  return EXIT_SUCCESS;
}

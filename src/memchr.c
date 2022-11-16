#include "ourstring.h"
#include <stdio.h>

void *our_memchr(const void *block, int search, size_t size) {

  if (size <= 0) {
    return NULL;
  }
  const unsigned char *copy = (const unsigned char *)block;

  if (*copy == '\0') {
    return NULL;
  }

  while (size-- > 0) {
    if (*copy == search) {
      return (void *)copy;
    }
    copy++;
  }
  return NULL;
}


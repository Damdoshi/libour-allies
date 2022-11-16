#include "ourstring.h"
#include <stdio.h>

size_t our_strcspn(const char *string, const char *rejected) {

  const char *copy = string;
  const char *iter = rejected;
  int count = 0;
  int len = our_strlen(string);

  while (len != 0) {
    if (*copy == *iter) {
      return count;
    }
    ++copy;
    count += 1;
    len -= 1;
  }
  return count;
}

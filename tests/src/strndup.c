#include "ourstring.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const char *original = "The original string.";
  char *copy = our_strndup(original, 3);
  int flag = 0;

  char *needed = "The";
  if (*copy++ == *needed++) {
    flag = 1;
  }
  assert(flag == 1);
  flag = 0;

  char *copy2 = our_strndup(original, 12);
  char *needed2 = "The original";
  if (*copy2++ == *needed2++) {
    flag = 1;
  }
  assert(flag == 1);
  flag = 0;

  char *copy3 = our_strndup(original, 19);
  char *needed3 = "The original string.";
  if (*copy3++ == *needed3++) {
    flag = 1;
  }
  assert(flag == 1);
  flag = 0;

  return EXIT_SUCCESS;
}


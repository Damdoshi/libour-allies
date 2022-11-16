#include "ourstring.h"
#include <stdlib.h>

char *our_strndup(const char *s, size_t n) {
  if (s == NULL) {
    return NULL;
  }
  size_t len = 0;

  size_t str_len = our_strlen(s);

  if (n > str_len) {
    len = str_len;
  } else if (str_len > n) {
    len = n;
  }
  char *new_char = malloc(len + 1);

  if (new_char == NULL) {
    return NULL;
  }

  new_char[len] = '\0';
  for (int i = 0; i < (int)(len); i++) {
    new_char[i] = s[i];
  }
  return new_char;
}

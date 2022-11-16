#include "ourstring.h"

char *our_strchrnul(const char *string, int c) {
  while (*string && *string != (char)c) {
    string++;
  }
  return (char *)string;
}

#include "ourstring.h"
#include <stdlib.h>

size_t		our_strlen(const char   *str)
{
  const char	*tmp;

  efassert("str is null", str, return (0));
  for (tmp = str; *tmp; ++tmp);
  return (tmp - str);
}

void our_strfry(char *str)
{
    size_t len = our_strlen(str);
    for (size_t i = 0; i < len; i++)
    {
        size_t j = rand() % len;
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}
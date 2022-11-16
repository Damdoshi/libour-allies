#include <stdio.h>
#include <string.h>

char *our_strchr(const char *a, int b)
{
  if (a == NULL)
    return (NULL);
  while (*a != '\0')
    {
      if (*a == b)
	return (char *) a;
      a++;
    }
  if (*a == b)
    return (char *) a;
  return NULL;
}

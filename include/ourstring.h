/*
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#ifndef OURSTRING_H
#define OURSTRING_H
#include "efassert.h"
#include <sys/types.h>

size_t our_strlen(const char *str);
char *our_strchrnul(const char *str, int c);
char *our_strndup(const char *s, size_t n);

#endif /*	OURSTRING_H		*/


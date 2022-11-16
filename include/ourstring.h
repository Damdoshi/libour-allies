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

long        our_strtol(const char *theString, char **end, int base); 


char		*our_strstr(const char	*meule_de_foin, const char	*aiguille);
size_t		our_strnlen(const char	*str,size_t	maxlen);
int         our_strcmp(const char *s1, const char *s2);
size_t our_strlen(const char *str);
char *our_strchrnul(const char *str, int c);
char *our_strndup(const char *s, size_t n);
int         our_atoi(const char *str);
char        *our_strcat(char *dest, const char *src);
char *our_strcpy(const char *s);

char *our_strfry(char *str);

#endif	/*	OURSTRING_H		*/



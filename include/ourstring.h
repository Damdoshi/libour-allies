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
long our_strtol(const char *theString, char **end, int base);
char *our_strstr(const char *meule_de_foin, const char *aiguille);
size_t our_strnlen(const char *str, size_t maxlen);
int our_strcmp(const char *s1, const char *s2);
int our_strrchr(char *string, char *cible);
char *our_strchrnul(const char *str, int c);
char *our_strndup(const char *s, size_t n);
int our_atoi(const char *str);
char *our_strcat(char *dest, const char *src);
char *our_strcpy(const char *s);
char *our_strfry(char *str);
size_t our_strcspn(const char *string, const char *rejected);
void *our_memchr(const void *block, int search, size_t size);
int our_memcmp(const void *s1, const void *s2, size_t n);
char  *our_strchr(const char *a, int b);
#endif /*	OURSTRING_H		*/


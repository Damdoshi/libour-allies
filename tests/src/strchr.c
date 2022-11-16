/*
** Jason Brillante "Damdoshi" -------------------------------------------------
** Pentacle Technologie 2008-2023 ---------------------------------------------
** EFRITS SAS 2022-2023 -------------------------------------------------------
** Hanged Bunny Studio 2014-2021 ----------------------------------------------
** La Caverne aux Lapins Noirs ------------------------------------------------
** ----------------------------------------------------------------------------
** Our Lib --------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#include	<stdlib.h>
#include	"ourstring.h"
#include	<string.h>

int ts(const char *a, int b, const char *c)
{
  return (strcmp(our_strchr(a, b), c));
}

int		main(void)
{
  assert(ts("abc", 'b', "bc") == 0);
  assert(our_strchr("abc", 'n') == NULL);
  assert(our_strchr("abc\0def", 'd') == NULL);
  assert(ts("abc\0def", '\0',"def") == 0);
  assert(our_strchr("", 'r') == NULL);
  assert(our_strchr(NULL, 'd') == NULL);
  assert(ts("abc", '\0', "") == 0);
 return (EXIT_SUCCESS);
}


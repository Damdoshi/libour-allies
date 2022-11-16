#include "ourstring.h"

size_t		our_strnlen(const char		*str, size_t		maxlen)
{
	if(our_strlen(str)<maxlen)
		return our_strlen(str);
	return maxlen;
}

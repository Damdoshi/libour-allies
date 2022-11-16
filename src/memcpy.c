#include <stdlib.h>
#include "ourstring.h"

void* our_memcpy(void *dest, const void * src, size_t size){
	if (NULL == dest){return (NULL);}
	if (NULL == src) {return (NULL);}
	char *d = dest;
	const char *s = src;
	while (size--)
		*d++ = *s++;
	return dest;
}

#include <stdlib.h>
#include "ourstring.h"


int main(void){
        const char* data = "hello\0";
        char* copy = NULL;
	char* vori1 = NULL;
        size_t size = 6;
        copy=(char*)malloc(size);
        our_memcpy(copy,data,size);
        assert(copy[0] == 'h');
	assert(our_memcpy(copy,vori1,size)==NULL);
	assert(our_memcpy(vori1,copy,size)==NULL);
        free(copy);
        return (EXIT_SUCCESS);
}


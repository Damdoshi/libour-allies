#include "ourstring.h"  

char *our_strstr(const char *meule_de_foin, const char *aiguille){

    if (meule_de_foin == 0 || aiguille == 0)
        return 0;

    int i, j, k;
    int len = our_strlen(meule_de_foin);
    int len2 = our_strlen(aiguille);

    if(len<len2) return 0;

    for (i = 0; i < len; i++){
        for (j = i, k = 0; k < len2; j++, k++){
            if (meule_de_foin[j] != aiguille[k]) break;
        }
        if (k == len2){
            return (char *)meule_de_foin + i;
        }
    }
    return 0;
}

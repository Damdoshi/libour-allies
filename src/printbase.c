#include	"ourstring.h"
#include	<unistd.h>

int our_printbase(int n, int base) {
    int nb = 0;
    if (base <= 1) {
        write(2, "Error: base must be greater than 1", 35);
        return -1;
    } else if (base > 62) {
        write(2, "Error: base must be less than 62", 32);
        return -1;
    } else if (n < 0) {
        write(1, "-", 1);
        nb = our_printbase(-n, base) + 1;
    } else {
        if (n >= base) {
            nb = our_printbase(n / base, base);
        }

        int c = n % base;
        write(1, &"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[c], 1);
        nb++;
    }
    return nb;
}
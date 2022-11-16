#include <assert.h>
#include <stdlib.h>
#include "ourstring.h"

int our_pow(int base, int exp)
{
    if (exp < 0)
        return -1;

    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

float our_atof(char *string)
{
    int start = 0;
    int neg = 1;
    int n = 0; // taille de la partie entière
    int h = 0; // taille de la string total
    int entier = 0;
    int relatif = 0;

    if (string == NULL)
    {
        return 3;
    }

    if (string[0] == '-')
    {
        neg = -1;
        start = 1;
    }
    h = start;
    while (string[h] != 0x00) // strlen du nombre
    {
        if ((string[h] < 48 || string[h] > 57) && string[h] != '.')
        {
            return 1;
        }
        h++;
    }

    if (h <= 0)
    {
        return 2;
    }

    while (string[n] != '.' && n < h) // compte le nombre d'élement avant la virgule
    {
        n = n + 1;
    }

    for (int i = start; i < n; i++) // atof de la parie entière
    {

        entier = entier + ((string[i] - 48) * our_pow(10, (n - i - 1)));
    }

    for (int i = n + 1; i < h; i++) // atof de la parie relative
    {

        relatif = relatif + ((string[i] - 48) * our_pow(10, (h - i - 1)));
    }

    float result = relatif;

    while (result >= 1)
    {
        result /= 10;
    }

    result += entier;

    return result * neg;
}

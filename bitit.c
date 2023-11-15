#include "bitit.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void kaannaScharBitit(signed char *x)
{
    int i;

    int bit;

    printf("%d\n", *x);

    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (*x >> i) & 1;
        printf("%d", bit);

    }
    *x = bit;
    printf("\n");

}

void kaannaShortBitit(short *x)
{
    short int i;

    int bit;

    printf("%d\n", *x);

    for (i =sizeof(short int)*CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (*x >> i) & 1;
        printf("%d", bit);

    }
    *x = bit;
    printf("\n");
}

void kaannaIntBitit(int *x)
{
    int i;

    int bit;

    printf("%d\n", *x);

    for (i = sizeof(int)*CHAR_BIT- 1; i >= 0; i--)
    {
        bit = (*x >> i) & 1;
        printf("%d", bit);

    }
    *x = bit;
    printf("\n");

}

void kaannaLongBitit(long *x)
{
    int i;

    int bit;

    printf("%d\n", *x);

    for (i =sizeof(long int)*CHAR_BIT- 1; i >= 0; i--)
    {
        bit = (*x >> i) & 1;
        printf("%ld", bit);

    }
    *x = bit;
    printf("\n");


}

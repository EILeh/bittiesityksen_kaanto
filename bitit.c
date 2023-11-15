#include "bitit.h"
#include <stdlib.h>
#include <stdio.h>

void kaannaScharBitit(signed char *x)
{

    int i;
    signed char *ptr_y = x;
    int *bit;

    printf("%d\n", *ptr_y);


    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (*ptr_y >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
/*

    for (i = 0; i < CHAR_BIT; i++)
    {
        if ((x >> i) & 1)
        {
            oneBits++;
        }
        else
        {
            zeroBits++;
        }
    }
    printf("%d\n", zeroBits);
    printf("%d\n", oneBits);


*/

}

void kaannaShortBitit(short *x)
{
    short *ptr_y = x;

    printf("%d\n", *ptr_y);
}

void kaannaIntBitit(int *x)
{
    int *ptr_y = x;

    printf("%d\n", *ptr_y);
}

void kaannaLongBitit(long *x)
{

    long *ptr_y = x;

    printf("%ld", *ptr_y);
}

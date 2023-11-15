#include "bitit.h"
#include <stdlib.h>
#include <stdio.h>

void kaannaScharBitit(signed char *x)
{

    signed char y;

    signed char bit;


    y = x;
    signed char *ptr_y = &x;

    printf("%d\n", *ptr_y);

/*
    for (i = CHAR_BIT - 1; i >= 0; i--)
    {
        bit = (x* >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");


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

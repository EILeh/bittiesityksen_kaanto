#include "bitit.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void kaannaScharBitit(signed char *x)
{
    int i;

    /*
    * K‰yd‰‰n l‰pi muuttujan x bittiesityksen puoliv‰liin.
    */
    for (i = 0; i < CHAR_BIT / 2; i++)
    {
        /*
        * Muuttuja j k‰y l‰pi bittijonoa alkaen viimeisest‰
        * indeksist‰.
        */
        int j = CHAR_BIT - 1 - i;
        /*
        * Tallennetaan muuttujiin bit_i ja bit_j bittiesitykset.
        */
        int bit_i = (*x >> i) & 1;
        int bit_j = (*x >> j) & 1;

        /*
        * Jos bit_i ei ole sama kuin bit_j, bittien arvot
        * vaihdetaan kesken‰‰n, jos bitin arvo on 1.
        */
        if (bit_i != bit_j)
        {
            *x ^= (1 << i) | (1 << j);
        }
    }
}

void kaannaShortBitit(short *x)
{
    int i;
    for (i = 0; i < sizeof(short) * CHAR_BIT / 2; i++)
    {
        int j = sizeof(short) * CHAR_BIT - 1 - i;
        int bit_i = (*x >> i) & 1;
        int bit_j = (*x >> j) & 1;

        if (bit_i != bit_j)
        {
            *x ^= (1 << i) | (1 << j);
        }
    }
}

void kaannaIntBitit(int *x)
{
    int i;
    for (i = 0; i < sizeof(int) * CHAR_BIT / 2; i++)
    {
        int j = sizeof(int) * CHAR_BIT - 1 - i;
        int bit_i = (*x >> i) & 1;
        int bit_j = (*x >> j) & 1;

        if (bit_i != bit_j)
        {
            *x ^= (1 << i) | (1 << j);
        }
    }
}

void kaannaLongBitit(long *x)
{
    int i;
    for (i = 0; i < sizeof(long) * CHAR_BIT / 2; i++)
    {
        int j = sizeof(long) * CHAR_BIT - 1 - i;
        int bit_i = (*x >> i) & 1;
        int bit_j = (*x >> j) & 1;

        if (bit_i != bit_j)
        {
            *x ^= (1L << i) | (1L << j);
        }
    }
}

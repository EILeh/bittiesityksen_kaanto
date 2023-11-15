#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long int lx = 2015;
    signed char cx = lx;
    short sx = lx;
    int ix = lx;

    kaannaScharBitit(&cx);

    printf("\n");

    kaannaShortBitit(&sx);

    printf("\n");

    kaannaIntBitit(&ix);

    printf("\n");

    kaannaLongBitit(&lx);



    return 0;
}

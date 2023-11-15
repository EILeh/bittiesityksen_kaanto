#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    short int x;
    int xInt;
    signed char schar_x;
    long int xLong;
    xLong = atoi(argv[1]);
    schar_x = xLong;

    kaannaScharBitit(&schar_x);
    printf("\n");

    kaannaShortBitit(&x);
    printf("\n");

    kaannaIntBitit(&xInt);
    printf("\n");

    kaannaLongBitit(&xLong);


    return 0;
}

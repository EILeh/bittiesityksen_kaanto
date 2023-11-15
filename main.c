#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    signed char schar_x;
    long int xLong;
    xLong = atoi(argv[1]);
    schar_x = xLong;

    kaannaScharBitit(schar_x);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2;
    int *pe;

    pe = &x1;
    *pe = 100;

    pe = &x2;
    *pe = 200;

    printf("La primera variable entera tiene: %i\n", x1);
    printf("La segunda variable entera tiene: %i\n", x2);
    return 0;
}

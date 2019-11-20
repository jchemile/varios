#include <stdio.h>
#include <stdlib.h>

void incrementar(int *pe)
{
    *pe = *pe + 1;
}

int main()
{
    int x = 0;

    printf("%i ", x);
    incrementar(&x);

    printf("%i ",x);
    incrementar(&x);

    printf("%i ", x);
    incrementar(&x);

    printf("%i ", x);
    incrementar(&x);

    return 0;
}

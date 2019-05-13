#include <stdio.h>
#include <stdlib.h>

void imprimir(int x)
{
    printf("%i ", x);
    imprimir(x-1);
}

int main()
{
    imprimir(5);
    return 0;
}

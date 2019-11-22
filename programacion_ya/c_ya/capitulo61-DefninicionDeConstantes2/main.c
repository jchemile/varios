#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD; f++)
    {
        printf("Valor: ");
        scanf("%i",&vec[f]);
    }
}

void imprimir(const int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD;f++)
    {
        printf("%i ", vec[f]);
    }
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    return 0;
}

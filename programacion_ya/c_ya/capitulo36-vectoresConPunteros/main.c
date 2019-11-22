#include <stdio.h>
#include <stdlib.h>

#define TAMANO 5

void cargar(int *pe)
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("Ingrese elemento: ");
        scanf("%i", &*pe);
        pe++;
    }
}

void imprimir(int *pe)
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("%i ", *pe);
        pe++;
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    return 0;
}

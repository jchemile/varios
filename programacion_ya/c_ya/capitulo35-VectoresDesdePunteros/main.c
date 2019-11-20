#include <stdio.h>
#include <stdlib.h>

#define TAMANO 5

void cargar(float *p)
{
    int f;
    for(f=0; f < TAMANO; f++)
    {
        printf("Elemento: ");
        scanf("%f", &p[f]);
    }
}

void imprimir(float *p)
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("Valor del indice %i: %0.2f \n",f, p[f]);
    }
}

int main()
{
    int vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    return 0;
}

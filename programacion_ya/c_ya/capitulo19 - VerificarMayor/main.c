#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[10])
{
    int x;
    for(x = 0; x < 10; x++)
    {
        printf("Cagar: ");
        scanf("%i", &vector[x]);
    }
}

void enOrden(int vector[10])
{
    int x, orden;
    orden = 1;
    for(x = 0; x < 9; x ++)
    {
        if(vector[x+1] < vector[x])
            orden = 0;
    }

    if(orden == 1)
        printf("Ordenado");
    else
        if(orden == 0)
            printf("No ordenado");
}

int main()
{
    int vector[10];
    cargar(vector);
    enOrden(vector);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    int ordenado;
    int arreglo[10];


    for(i = 0; i < 10; i++)
    {
        printf("Valor %i: ", i);
        scanf("%i", &arreglo[i]);
    }

    ordenado = 1;
    for(i = 0; i < 9; i++)
    {
        if(arreglo[i + 1] < arreglo[i])
            ordenado = 0;
    }

    if(ordenado == 1)
        printf("Ordenado");
    else
        printf("No ordenado");
    return 0;
}

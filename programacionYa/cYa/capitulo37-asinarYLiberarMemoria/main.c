#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *pe, tam, f;

    printf("Elementos del vector: ");
    scanf("%i", &tam);

    pe = malloc(tam*sizeof(int));

    for(f=0; f < tam;f++)
    {
        printf("Valor: ");
        scanf("%i", &pe[f]);
    }

    printf("Contenido: ");
    for(f = 0; f < tam; f++)
    {
        printf(" %i ", pe[f]);
    }

    free(pe);

    return 0;
}

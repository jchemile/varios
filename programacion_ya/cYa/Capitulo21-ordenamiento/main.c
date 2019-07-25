#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5])
{
    int x;
    for(x=0; x < 5; x++)
    {
        printf("Valor: ");
        scanf("%i", &vector[x]);
    }
}

void imprimir(int vector[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("%i ", vector[x]);
    }
}

void ordenar(int vector[5])
{
    int x, j;
    for(x = 0; x<5;x++)
        for(j = x + 1; j<5;j++)
        {
            if(vector[x] > vector[j])
            {
                int aux;
                aux = vector[j];
                vector[j] = vector[x];
                vector[x] = aux;
            }
        }
}

int main()
{
    int prueba[5];
    cargar(prueba);
    printf("\nNORMAL\n");
    imprimir(prueba);
    ordenar(prueba);
    printf("\nORDENADO\n");
    imprimir(prueba);
    return 0;
}

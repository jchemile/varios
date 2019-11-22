#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5])
{
    int x;
    for(x = 0; x < 5; x++)
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

void ordenarDeMayorAMenor(int vector[5])
{
    int x, j;
    for(x = 0; x < 5; x++)
        for(j = x + 1; j < 5; j++)
            if(vector[x] < vector[j])
            {
                int aux;
                aux = vector[x];
                vector[x] = vector[j];
                vector[j] = aux;
            }
}

void ordenarDeMenorAMayor(int vector[5])
{
    int x, j;
    for(x = 0; x < 5; x++)
        for(j = x + 1; j < 5; j++)
            if(vector[x] > vector[j])
            {
                int aux;
                aux = vector[x];
                vector[x] = vector[j];
                vector[j] = aux;
            }
}

int main()
{
    int vectorPrueba[5];
    cargar(vectorPrueba);
    printf("\nNORMAL\n");
    imprimir(vectorPrueba);
    ordenarDeMayorAMenor(vectorPrueba);
    printf("\nMAYOR A MENOR\n");
    imprimir(vectorPrueba);
    ordenarDeMenorAMayor(vectorPrueba);
    printf("\nDE MENOR A MAYOR\n");
    imprimir(vectorPrueba);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void cargar(int V[TAM])
{
    int contador;

    for(contador = 0; contador < TAM; contador++)
    {
        printf("Cargar valor: ");
        scanf("%i", &V[contador]);
    }
}

void imprimir(int V[TAM])
{
    int contador;

    for(contador = 0; contador < TAM; contador++)
    {
        printf("%i ", V[contador]);
    }
}

void mayorMenor(int V[TAM], int *pMayor, int *pMenor)
{
    int contador;

    for(contador = 0; contador < TAM; contador++)
    {
        if(contador == 0)
        {
            *pMayor = V[contador];
            *pMenor = V[contador];
        }
        else
        {
            if (*pMayor < V[contador])
                *pMayor = V[contador];

            if (*pMenor > V[contador])
                *pMenor = V[contador];
        }
    }
}

int main()
{
    int mayor, menor;
    int prueba[TAM];
    cargar(prueba);
    imprimir(prueba);
    mayorMenor(prueba, &mayor, &menor);
    printf("\nMayor: %i, menor: %i", mayor, menor);
    return 0;
}

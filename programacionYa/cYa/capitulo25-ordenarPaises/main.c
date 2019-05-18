#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargar(char paises[5][40], int poblaciones[5])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("Pais:");
        gets(paises[f]);
        printf("poblacion:");
        scanf("%i", &poblaciones[f]);
        fflush(stdin);
    }
}

void imprimir(char paises[5][40], int poblaciones[5])
{
    int f;
    printf("Listado:\n");
    for(f = 0; f < 5; f++)
    {
        printf("%s - %i\n", paises[f], poblaciones[f]);
    }
}

void ordenarAlfabeticamente(char paises[5][40], int poblaciones[5])
{
    int k, f;
    char auxPaises[5];
    int auxPoblaciones;
    for(k = 0; k < 5; k++)
    {
        for(f = 0; f < 4 - k; f++)
        {
            if(strcmp(paises[f],paises[f+1]) > 0)
            {
                //ORDENO POBLACIONES
                auxPoblaciones = poblaciones[f];
                poblaciones[f] = poblaciones[f+1];
                poblaciones[f+1] = auxPoblaciones;
                //ORDENO PAISES;
                strcpy(auxPaises, paises[f]);
                strcpy(paises[f], paises[f+1]);
                strcpy(paises[f+1], auxPaises);
            }
        }
    }
}

void ordenarPorHabitantes(char paises[5][40], int poblaciones[5])
{
    int f, k;
    char auxPaises[5][40];
    int auxPoblaciones;
    for(f = 0; f < 5;f++)
    {
        for(k = 0; k < 4-f;k++)
        {
            if(poblaciones[k] < poblaciones[k+1])
            {
                //ORDENO POBLACIONES
                auxPoblaciones = poblaciones[k];
                poblaciones[k] = poblaciones[k+1];
                poblaciones[k+1] = auxPoblaciones;
                //ORDENO PAISES
                strcpy(auxPaises, paises[k]);
                strcpy(paises[k], paises[k+1]);
                strcpy(paises[k+1], auxPaises);
            }
        }
    }
}

int main()
{
    char paises[5][40];
    int poblaciones[5];
    cargar(paises, poblaciones);
    printf("--SIN ORDENAR--\n");
    imprimir(paises,poblaciones);
    printf("--ORDENADOS ALFABETICAMENTE--\n");
    ordenarAlfabeticamente(paises, poblaciones);
    imprimir(paises,poblaciones);
    printf("--ORDENADOS POR POBLACION--\n");
    ordenarPorHabitantes(paises, poblaciones);
    imprimir(paises,poblaciones);
    return 0;
}

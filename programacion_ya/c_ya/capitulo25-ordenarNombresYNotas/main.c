#include <stdio.h>
#include <stdlib.h>

void cargar(char nombres[5][40], int notas[5])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("Ingrese el nombre del alumno:");
        gets(nombres[f]);
        printf("Ingrese la nota del alumno: ");
        scanf("%i", &notas[f]);
        fflush(stdin);
    }
}

void ordenar(char nombres[5][40], int notas[5])
{
    int k, f;
    int auxNotas;
    char auxNombres[40];
    for(k=0; k < 5; k++)
    {
        for(f = 0; f < 4 - k; f++)
        {
            if(notas[f] < notas[f+1])
            {
                //CAMBIO NOTAS
                auxNotas = notas[f];
                notas[f] = notas[f + 1];
                notas[f + 1] = auxNotas;
                //CAMBIO NOMBRES
                strcpy(auxNombres, nombres[f]);
                strcpy(nombres[f], nombres[f+1]);
                strcpy(nombres[f+1], auxNombres);
            }
        }
    }
}

void imprimir(char nombres[5][40], int notas[5])
{
    int f;
    printf("Listado de Alumnos\n");
    for(f = 0; f < 5; f++)
    {
        printf("%s - %i\n", nombres[f], notas[f]);
    }
}

int main()
{
    char nombres[5][40];
    int notas[5];
    cargar(nombres, notas);
    printf("SIN ORDEANAR\n");
    imprimir(nombres, notas);
    printf("ORDEANADOS\n");
    ordenar(nombres, notas);
    imprimir(nombres, notas);
    return 0;
}

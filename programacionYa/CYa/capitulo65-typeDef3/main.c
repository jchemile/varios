#include <stdio.h>
#include <stdlib.h>

#define TAM 5

struct persona{
    char nombre[40];
    int edad;
};

typedef struct persona tpersonas[TAM];

void cargar(tpersonas personas)
{
    int f;
    for(f = 0; f < TAM; f++)
    {
        printf("Nombre:");
        gets(personas[f].nombre);
        printf("Edad:");
        scanf("%i", &personas[f].edad);
        fflush(stdin);
    }
}

void imprimir(tpersonas personas)
{
    int f;
    for(f = 0; f < TAM; f++)
    {
        printf("%s %i\n", personas[f].nombre, personas[f].edad);
    }
}

int main()
{
    tpersonas personas;
    cargar(personas);
    imprimir(personas);
    return 0;
}

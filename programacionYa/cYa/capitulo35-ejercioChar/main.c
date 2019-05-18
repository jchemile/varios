#include <stdio.h>
#include <stdlib.h>

#define TAMANO 40

void cargar(char *p)
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("Caracter: ");
        scanf(" %c", &p[f]);
    }
}

void imprimir(char *p)
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("El indice %i posee el caracter: %c\n", f, p[f]);
    }
}

int main()
{
    char vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    return 0;
}

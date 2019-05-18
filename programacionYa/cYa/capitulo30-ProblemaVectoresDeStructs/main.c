#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO 3

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro vec[TAMANO]){

    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("Codigo: ");
        scanf("%i", &vec[f].codigo);
        fflush(stdin);
        printf("Titulo: ");
        gets(vec[f].titulo);
        printf("Autor: ");
        gets(vec[f].autor);
    }
}

void imprimir(struct libro vec[TAMANO])
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("%i - %s - %s\n", vec[f].codigo, vec[f].autor, vec[f].titulo);
    }
}

void listarLibros(struct libro vec[TAMANO])
{
    char autorABuscar[40];
    int f = 0;
    int encontrado = 0;
    printf("Ingrese el autor:");
    gets(autorABuscar);
    while(autorABuscar != vec[f].autor && f <= TAMANO)
    {
        if(strcmp(autorABuscar, vec[f].autor) == 0)
        {
            printf("%s - %s\n", vec[f].autor, vec[f].titulo);
            encontrado = 1;
        }
        f++;
    }

    if(encontrado == 0)
        printf("No se encontro ese autor");
}

int main()
{
    struct libro vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    fflush(stdin);
    listarLibros(vector);

    return 0;
}

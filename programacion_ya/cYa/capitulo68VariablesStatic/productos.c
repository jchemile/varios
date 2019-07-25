#include<stdio.h>
#include"productos.h"

static void mostrarTitulo(char *tit)
{
    printf("%s\n", tit);
}

static void mostrarAsteriscos()
{
    printf("*************************************\n\n");
}

void cargar(tproducto productos[CANT])
{
    int f;
    mostrarTitulo("Cargar los datos del producto\n");
    for(f = 0; f < CANT; f++)
    {
        printf("Codigo: ");
        scanf("%i", &productos[f].codigo);
        fflush(stdin);
        printf("Descripcion:");
        gets(productos[f].descripcion);
        printf("Precio: ");
        scanf("%f", &productos[f].precio);
    }
    mostrarAsteriscos();
}

void imprimir(tproducto productos[CANT])
{
    int f;
    mostrarTitulo("Listado de productos");
    for(f = 0; f < CANT; f++)
    {
        printf("Codigo: %i \n", productos[f].codigo);
        printf("Descripcion: %s \n", productos[f].descripcion);
        printf("Precio: %0.2f \n", productos[f].precio);
    }
    mostrarAsteriscos();
}

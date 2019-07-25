#include <stdio.h>
#include <stdlib.h>

void cargar(char articulos[3][31])
{
    int f;
    for(f = 0; f < 3; f++)
    {
        printf("Ingrese el nombre del articulo: ");
        gets(articulos[f]);
    }
}

void imprimir(char articulos[3][31])
{
    int f;
    printf("El listado de los articulos: \n");
    for(f = 0; f < 3; f++)
    {
        printf("%s\n", articulos[f]);
    }
}

int main()
{
    char articulos[3][31];
    cargar(articulos);
    imprimir(articulos);
    return 0;
}

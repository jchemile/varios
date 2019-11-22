#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod)
{
    printf("Ingrese codigo: ");
    scanf("%i", &pprod ->codigo);
    fflush(stdin);
    printf("Ingrese descripcion: ");
    gets(&pprod ->descripcion);
    printf("Ingrese precio: ");
    scanf(&pprod ->precio);
}

void imprimir(struct producto prod)
{
    printf("Producto: %i\n", prod.codigo);
    printf("Descripcion: %s\n", prod.descripcion);
    printf("Precio: %0.2f", prod.precio);
}


int main()
{
    struct producto prod;
    cargar(&prod);
    imprimir(prod);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

int main()
{
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    prod -> codigo = 1;
    strcpy(prod -> descripcion, "papas");
    prod -> precio = 10.5;

    printf("Codigo %i. Descricion: %s. Precio: %0.2f.", prod->codigo, prod->descripcion, prod->precio);

    free(prod);
    return 0;
}

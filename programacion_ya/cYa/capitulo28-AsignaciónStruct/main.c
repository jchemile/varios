#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto p)
{
    printf("Codigo: %i\n",p.codigo);
    printf("Descripcion: %s\n",p.descripcion);
    printf("Precio: %i\n",p.precio);
}

int main()
{
    struct producto pro;
    pro.codigo = 1;
    strcpy(pro.descripcion, "naranjas");
    pro.precio = 12.50;
    imprimir(pro);
    return 0;
}

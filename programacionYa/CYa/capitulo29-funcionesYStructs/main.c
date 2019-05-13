#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[40];
    float precio;
};

struct producto cargar()
{
    struct producto pro;
    printf("Codigo: ");
    scanf("%i", &pro.codigo);
    fflush(stdin);
    printf("Descripcion:");
    gets(pro.descripcion);
    printf("Precio: ");
    scanf("%f", &pro.precio);
    return pro;
};

void imprimir(struct producto pro)
{
    printf("DATOS\n");
    printf("Codigo: %i\n", pro.codigo);
    printf("Descripcion: %s\n", pro.descripcion);
    printf("Precio: %0.2f\n", pro.precio);
};

int main()
{
    struct producto pro1, pro2;
    pro1 = cargar();
    pro2 = cargar();
    imprimir(pro1);
    imprimir(pro2);
    return 0;
}

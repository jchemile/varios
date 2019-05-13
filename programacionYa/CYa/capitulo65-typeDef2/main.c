#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

typedef struct producto tproducto;


int main()
{
    tproducto pro1, pro2;

    printf("Codigo: ");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    printf("Descripcion:");
    gets(pro1.descripcion);
    printf("Precio: ");
    scanf("%f", &pro1.precio);

    printf("Codigo: ");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    printf("Descripcion:");
    gets(pro2.descripcion);
    printf("Precio: ");
    scanf("%f", &pro2.precio);

    if(pro1.precio > pro2.precio)
        printf("El producto %s tiene un precio mayor", pro1.descripcion);
    else
        if(pro2.precio > pro1.precio)
            printf("El producto %s tiene un precio mayor", pro2.descripcion);
        else
            printf("Tienen igual precio");
    return 0;
}

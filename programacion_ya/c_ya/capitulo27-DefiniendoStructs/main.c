#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

int main()
{
    struct producto pro1, pro2;
    //PRODUCTO 1
    //CODIGO
    printf("Codigo:");
    scanf("%i", &pro1.codigo);
    fflush(stdin);
    //DESCRIPCION
    printf("Descripcion:");
    gets(pro1.descripcion);
    fflush(stdin);
    //PRECIO
    printf("Precio:");
    scanf("%f", &pro1.precio);
    fflush(stdin);

        //PRODUCTO 2
    //CODIGO
    printf("Codigo:");
    scanf("%i", &pro2.codigo);
    fflush(stdin);
    //DESCRIPCION
    printf("Descripcion:");
    gets(pro2.descripcion);
    fflush(stdin);
    //PRECIO
    printf("Precio:");
    scanf("%f", &pro2.precio);
    fflush(stdin);

    if(pro2.precio>pro1.precio)
        printf("Producto %s tiene precio mayor", pro2.descripcion);
    else
        if(pro2.precio < pro1.precio)
            printf("Producto %s tiene precio mayor", pro1.descripcion);
        else
            printf("Tienen precios iguales");

    return 0;
}

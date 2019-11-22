#include <stdio.h>
#include <stdlib.h>

void cargarProductos(char productos[5][40], float precios[5])
{
    int k;
    for(k = 0; k < 5; k++)
    {
        printf("Producto:");
        gets(productos[k]);
        printf("Precios:");
        scanf("%f",&precios[k]);
        fflush(stdin);
    }
}

int mayorQueElPrimero(float precios[5])
{
    int k;
    int menores = 0;
    for(k = 0; k < 5; k++)
    {
        if(precios[0] < precios[k])
            menores++;
    }

    return menores;
}

int main()
{
    char productos[5][40];
    float precios[5];
    cargarProductos(productos, precios);
    printf("Mayores: %i", mayorQueElPrimero(precios));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD; f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &vec[f]);
    }
}

int retornarSuma(int vec[CANTIDAD])
{
    int suma = 0;
    int f;
    for(f=0;f<CANTIDAD;f++)
    {
        suma += vec[f];
    }
    return suma;
}

int retornarProducto(int vec[CANTIDAD])
{
    int producto = 1;
    int f;
    for(f = 0; f < CANTIDAD; f++)
    {
        producto *= vec[f];
    }
    return producto;
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    printf("SUMA: %i\n", retornarSuma(vec));
    printf("PRODUCTO: %i\n", retornarProducto(vec));
    return 0;
}

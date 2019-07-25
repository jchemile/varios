#include <stdio.h>
#include <stdlib.h>

inline int calcularCuadrado(int x)
{
    return x * x;
}

int main()
{
    printf("El cuadrado de 5 es: %i", calcularCuadrado(5));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, perimetro;
    printf("Por favor ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    perimetro = lado * 4;

    printf("El perimetro del cuadrado es: ");
    printf("%f", perimetro);
    getch();
    return 0;
}

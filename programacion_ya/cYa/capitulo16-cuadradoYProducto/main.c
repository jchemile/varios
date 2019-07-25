#include <stdio.h>
#include <stdlib.h>

void cuadrado()
{
    int valor1, cuadrado;
    printf("Ingrese valor para ser elevado al cuadrado: ");
    scanf("%i", &valor1);
    cuadrado = valor1 * valor1;
    printf("Cuadrado: %i", cuadrado);
}

void multiplicacion()
{
    int valor1, valor2, producto;
    printf("\nValor 1:");
    scanf("%i", &valor1);
    printf("Valor 2:");
    scanf("%i", &valor2);
    producto = valor1 * valor2;
    printf("Producto: %i", producto);
}

int main()
{
    cuadrado();
    multiplicacion();
    return 0;
}

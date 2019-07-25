#include <stdio.h>
#include <stdlib.h>

void cargarSuma()
{
    int valor1, valor2, suma;
    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    suma = valor1 + valor2;

    printf("El Suma es igual a: %i", suma);
}

void separacion()
{
    printf("\n************************\n");
}

int main()
{
    cargarSuma();
    separacion();
    cargarSuma();
    separacion();
    return 0;
}

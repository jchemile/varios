#include <stdio.h>
#include <stdlib.h>


void presentacion()
{
    printf("Programa para cargar dos valores\n");
    printf("Efectua suma\n");
    printf("Muestra resultado\n");
    printf("********************************\n");
}

void cargarSuma()
{
    int valor1, valor2, suma;
    printf("Primer valor: ");
    scanf("%i", &valor1);
    printf("Segundi valor: ");
    scanf("%i", &valor2);
    suma = valor1 + valor2;
    printf("La suma de los valores es: %i", suma);
}

void finalizacion()
{
    printf("\n***************\n");
    printf("-------FIN--------");
}

int main()
{
    presentacion();
    cargarSuma();
    finalizacion();
    return 0;
}

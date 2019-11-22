#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Por favor ingrese valor 1 ");
    scanf("%i", &valor1);
    printf("Por favor ingrese valor 2 ");
    scanf("%i", &valor2);
    printf("Por favor ingrese valor 3 ");
    scanf("%i", &valor3);

    if(valor1 < 10 || valor2 < 10 || valor3 < 10)
    {
        printf("Algun valor es menor que 10");
    }
    else
    {
        printf("Ningún valor es menor que 10");
    }
    return 0;
}

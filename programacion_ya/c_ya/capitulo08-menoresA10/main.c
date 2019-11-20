#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Por favor ingrese valor 1: ");
    scanf("%i", &valor1);
    printf("Por favor ingrese valor 2: ");
    scanf("%i", &valor2);
    printf("Por favor ingrese valor 3: ");
    scanf("%i", &valor3);

    if(valor1 == valor2 || valor1 == valor3)
    {
        printf("Los tres valores son igulaes");
    }
    else
    {
        printf("Los tres valores no son iguales");
    }

    return 0;
}

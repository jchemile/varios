#include <stdio.h>
#include <stdlib.h>

void imprimirMayor(int v1, int v2)
{
    if(v1 > v2)
        printf("El mayor es %i", v1);
    else
        printf("El mayor es %i", v2);
}

int main()
{
    int valor1, valor2;
    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    imprimirMayor(valor1,valor2);
    return 0;
}

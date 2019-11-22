#include <stdio.h>
#include <stdlib.h>

int retornaMayor(int v1, int v2)
{
    int mayor;
    if(v1 > v2)
    {
        mayor = v1;
    }
    else
    {
        mayor = v2;
    }
    return mayor;
}

int main()
{
    int valor1, valor2, mayor;
    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    mayor = retornaMayor(valor1, valor2);
    printf("Mayor: %i", mayor);
    return 0;
}

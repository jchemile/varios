#include <stdio.h>
#include <stdlib.h>

void mayor(int valor1, int valor2, int valor3)
{
    if(valor1 > valor2 && valor1 > valor3)
        printf("Mayor: %i", valor1);
    else
        if(valor2 > valor3)
            printf("Mayor: %i", valor2);
        else
            printf("Mayor: %i", valor3);
}

int main()
{
    int valor1, valor2, valor3;
    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    printf("Valor 3: ");
    scanf("%i", &valor3);

    mayor(valor1, valor2, valor3);
    return 0;
}

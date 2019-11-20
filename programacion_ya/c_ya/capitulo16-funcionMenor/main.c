#include <stdio.h>
#include <stdlib.h>

void menor()
{
    int valor1, valor2, valor3, menor;
    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    printf("Valor 3: ");
    scanf("%i", &valor3);

    if(valor1 < valor2 && valor1 < valor3)
        menor = valor1;
    else
        if(valor2 < valor3)
            menor = valor2;
        else
            menor = valor3;

    printf("Menor: %i\n", menor);
}

int main()
{
    menor();
    menor();
    menor();
    return 0;
}

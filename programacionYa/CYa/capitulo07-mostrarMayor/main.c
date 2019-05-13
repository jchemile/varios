#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &valor3);

    if(valor1 > valor2 && valor1 > valor3)
    {
        printf("El mayor es: ");
        printf("%i", valor1);
    }
    else
    {
        if(valor2 > valor3)
        {
            printf("El mayor es: ");
            printf("%i", valor2);
        }
        else
        {
            printf("El mayor es: ");
            printf("%i", valor3);
        }
    }
    return 0;
}

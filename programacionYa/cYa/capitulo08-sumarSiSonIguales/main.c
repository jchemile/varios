#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3;
    int resultado;

    printf("por favor ingrese valor 1: ");
    scanf("%i", &valor1);
    printf("por favor ingrese valor 2: ");
    scanf("%i", &valor2);
    printf("por favor ingrese valor 3: ");
    scanf("%i", &valor3);

    if(valor1 == valor2 && valor1 == valor3)
    {
        resultado = (valor1 + valor2) * valor3;
        printf("%i", resultado);
    }
    else
    {
        printf("los tres valorse no son iguales");
    }
    return 0;
}

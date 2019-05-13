#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, resultado;
    char operador;

    printf("Valor 1: ");
    scanf("%i", &valor1);
    printf("Valor 2: ");
    scanf("%i", &valor2);
    printf("Operador [+,-,*,/] ");
    scanf(" %c", &operador);

    switch(operador)
    {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 / valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            if(valor2 == 0)
            {
                resultado = 0;
            }
            else
            {
                resultado = valor1 / valor2;
            }
            break;
    }

    printf("Resultado: %i", resultado);


    return 0;
}

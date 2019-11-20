#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, resultado;
    char operacion;
    printf("Primer Valor: ");
    scanf("%i", &valor1);
    printf("Segundo Valor: ");
    scanf("%i", &valor2);
    printf("Seleccione operador entre [+ - * /]");
    scanf(" %c", &operacion);
    switch(operacion)
    {
        case '+':
            resultado = valor1 + valor2;
            printf("SUMA: %i", resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("RESTA: %i", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("MULTIPLICACION: %i", resultado);
            break;
        case '/':
            resultado = valor1 / valor2;
            printf("DIVISION: %i", resultado);
            break;

    }
    return 0;
}

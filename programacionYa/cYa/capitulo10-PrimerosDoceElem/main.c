#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorIngresado, contador, resultado;

    printf("Por Favor Ingrese un valor del 1 al 10: ");
    scanf("%i", &valorIngresado);
    while(valorIngresado < 1 || valorIngresado > 10 )
    {
        printf("No ha ingresado un valor entre 1 y 10. Ingree nuevamente: ");
        scanf("%i", &valorIngresado);
    }

    for(contador = 0; contador <= 12; contador++)
    {
        resultado = valorIngresado * contador;
        printf("%i X %i = %i\n", valorIngresado, contador, resultado);
    }
    return 0;
}

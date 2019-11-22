#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado, contador;

    for(contador = 0; contador <= 10; contador++)
    {
        resultado = 5 * contador;
        printf("El valor de 5 X %i es %i\n", contador, resultado);
    }
    return 0;
}

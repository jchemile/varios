#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorIngresado, sumaTotal, contador;

    for(contador = 0; contador < 10; contador++)
    {
        printf("Por favor ingrese un numero: ");
        scanf("%i", &valorIngresado);

        if(contador > 6)
            sumaTotal += valorIngresado;

    }

    printf("El total de los ultimos 5 es %i", sumaTotal);
    return 0;
}

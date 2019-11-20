#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidadAingresar, ingresados, valorIngresado, numPar, numImpar;

    printf("Cuantos valores ingresara: ");
    scanf("%i", &cantidadAingresar);

    ingresados = 1;
    numPar = 0;
    numImpar = 0;

    while(ingresados <= cantidadAingresar)
    {
        printf("Ingrese el valor %i: ", ingresados);
        scanf("%i", &valorIngresado);

        if(valorIngresado % 2 == 0)
            numPar++;
        else
            if(valorIngresado %2 != 0)
            numImpar++;

        ingresados++;
    }

    printf("Pares %i. Impares %i", numPar, numImpar);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valoresNegativos, valoresPositivos, multiplosQuince, pares, contador, ingresado;

    valoresNegativos = valoresPositivos = multiplosQuince = pares = 0;

    for(contador = 1; contador <= 10; contador++ )
    {
        printf("Valor %i: ", contador);
        scanf("%i", &ingresado);

        if(ingresado < 0)
            valoresNegativos++;
                else
                    if(ingresado > 0)
                        valoresPositivos++;

        if(ingresado % 15 == 0)
            multiplosQuince++;

        if(ingresado % 2 == 0)
            pares++;
    }

    printf("Negativos %i, positivos %i, multiplos de 15 %i, pares %i.", valoresNegativos, valoresPositivos, multiplosQuince, pares);

    return 0;
}

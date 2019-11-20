#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, suma, acumuladoMayor36, cantMayor50;
    int elementos[8];

    acumuladoMayor36 = 0;
    cantMayor50 = 0;
    suma = 0;

    for(f = 0; f < 8; f++)
    {
        printf("Valor: ");
        scanf("%i", &elementos[f]);

        suma += elementos[f];

        if(elementos[f] > 36)
            acumuladoMayor36 += elementos[f];

        if(elementos[f] > 50)
            cantMayor50++;
    }

    printf("Suma total: %i. Suma mayores a 36: %i. Mayores que 50: %i.", suma, acumuladoMayor36, cantMayor50);

    return 0;
}

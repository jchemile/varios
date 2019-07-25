#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, may, men;
    float alturas[5];
    float suma, promedio;

    for( f = 0; f < 5; f++)
    {
        printf("Altura: ");
        scanf("%f", &alturas[f]);
    }

    for( f = 0; f < 5; f++)
    {
        suma += alturas[f];
    }

    promedio = suma/5;
    printf("Promedio: %0.5f\n", promedio);

    may = 0;
    men = 0;

    for(f = 0; f < 5; f++)
    {
        if(alturas[f] > promedio)
            may++;
        else
            if(alturas[f] < promedio)
                men++;
    }

    printf("Mayores al promedio %i, menores al promedio %i", may, men);
    return 0;
}

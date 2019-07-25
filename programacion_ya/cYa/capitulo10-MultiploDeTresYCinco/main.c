#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplo3, multiplo5, valor, f;

    multiplo3 = 0;
    multiplo5 = 0;

    for(f = 1; f <= 10; f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &valor);

        if(valor % 3 == 0)
            multiplo3++;

        if(valor % 5 == 0)
            multiplo5++;
    }

    printf("Multiplos de 3: %i, multiplos de 5: %i", multiplo3, multiplo5);
    return 0;
}

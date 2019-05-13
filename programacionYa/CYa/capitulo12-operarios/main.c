#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
    int sueldos[5];

    for(f = 0; f < 5; f++)
    {
        printf("Valor: ");
        scanf("%i", &sueldos[f]);
    }

    printf("--LISTADO DE SUELDOS--\n");

    for(f= 0; f < 5; f++)
    {
        printf("%i\n", sueldos[f]);
    }
    return 0;
}

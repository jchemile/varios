#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma, f, valor, promedio;

    suma = 0;

    for(f = 1; f <= 10;f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &valor);
        suma += valor;
    }

    promedio = suma/10;

    printf("La suma es %i ", suma);
    printf("El promedio es %i ", promedio);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad, n, f, valor;

    cantidad = 0;

    printf("Valores a ingresar: ");
    scanf("%i", &n);

    for(f = 1; f <= n; f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &valor);

        if(valor >= 1000).
        {
            cantidad++;
        }
    }

    printf("Mayores que mil: %i", cantidad);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int f;
    int suma = 0;
    for(f = 0; f < 10; f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &valor);
        if(valor == 0)
            break;
        suma += valor;
    }
    printf("La suma es: %i", suma);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int suma = 0;
    while(1)
    {
        printf("Ingrese valor(0 para finalizar):");
        scanf("%i", &valor);
        if(valor == 0)
        {
            break;
        }
        suma +=valor;
    }
    printf("La suma de los valores ingresados es: %i", suma);
    return 0;
}

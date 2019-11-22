#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, suma;
    char otro;

    suma = 0;

    do
    {
        printf("Valor: ");
        scanf("%i", &valor);

        suma += valor;

        printf("Otro: [s/n]");
        scanf(" %c", &otro);

    }while(otro == 's');

    printf("%i", suma);
    return 0;
}

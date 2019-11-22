#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado, superficie;
    printf("Por favor ingrese el valor del lado del cuadrado: ");
    scanf("%i", &lado);
    superficie = lado * lado;
    printf("La superficie del cuadrado es: ");
    printf("%i", superficie);
    getch();
    return 0;
}

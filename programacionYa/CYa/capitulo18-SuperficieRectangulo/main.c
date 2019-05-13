#include <stdio.h>
#include <stdlib.h>

int retornarSuperficie(int lado1, int lado2)
{
    int superficie = lado1 * lado2;
    return superficie;
}

int main()
{
    int lado1, lado2, area;
    printf("Lado 1: ");
    scanf("%i", &lado1);
    printf("Lado 2: ");
    scanf("%i", &lado2);

    area = retornarSuperficie(lado1, lado2);

    printf("Area: %i", area);
    return 0;
}

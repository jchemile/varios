#include <stdio.h>
#include <stdlib.h>

int retornaSuperficie(int lado)
{
    int superficie = lado * lado;
    return superficie;
}

int main()
{
    int valor, sup;
    printf("Lado: ");
    scanf("%i", &valor);
    sup = retornaSuperficie(valor);
    printf("Superficie: %i", sup);
    return 0;
}

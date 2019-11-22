#include <stdio.h>
#include <stdlib.h>

void calcularSuperficie(int lado)
{
    int superficie = lado * lado;
    printf("Superficie = %i\n", superficie);
}

void calcularPerimetro(int lado)
{
    int perimetro = lado * 4;
    printf("Perimetro = %i\n", perimetro);
}

int main()
{
    int x;
    for(x = 10; x <= 20; x++)
    {
        printf("Lado = %i\n", x);
        calcularPerimetro(x);
        calcularSuperficie(x);
        printf("************\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

float perimetroCuadrado(int lado)
{
    float perimetro = lado * 4;
    return perimetro;
}

int main()
{
    int lado;
    float perim;
    for(lado = 0; lado < 10; lado++)
    {
        perim = perimetroCuadrado(lado);
        printf("Lado: %i Perimetro: %0.2f\n", lado, perim);
    }


    return 0;
}

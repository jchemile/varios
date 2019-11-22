#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidadDeTriangunos, contador, mayorADoce;
    float base, altura, area;

    mayorADoce = 0;

    printf("Cuantos triangulos ingresara: ");
    scanf("%i", &cantidadDeTriangunos);

    for(contador = 1; contador <= cantidadDeTriangunos; contador++)
    {
        printf("\nTriangulo: %i", contador);
        printf("\nBase: ");
        scanf("%f", &base);
        printf("Altura: ");
        scanf("%f", &altura);

        area = (base * altura) / 2;

        if(area > 12)
            mayorADoce++;

        printf("Base: %0.2f, altura: %0.2f, area %0.2f\n", base, altura, area);
    }

    printf("Hay %i triangulos con area mayor a doce", mayorADoce);
    return 0;
}

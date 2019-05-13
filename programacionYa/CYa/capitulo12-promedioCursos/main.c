#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float sumaA, sumaB;
    float cursoA[5];
    float cursoB[5];

    sumaA = 0;
    sumaB = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Ingrese la nota %i para el curso A: ", i);
        scanf("%f", &cursoA[i]);
        sumaA += cursoA[i];
        printf("Ingrese la nota %i para el curso B: ", i);
        scanf("%f", &cursoB[i]);
        sumaB += cursoB[i];
    }

    if(sumaA > sumaB)
        printf("Mayor promedio Curso A");
    else
        if(sumaB > sumaA)
            printf("Mayor promedio Curso B");
        else
            printf("Promedios Iguales");

    return 0;
}

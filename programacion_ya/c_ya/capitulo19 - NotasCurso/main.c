#include <stdio.h>
#include <stdlib.h>

void cargar(int notas[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("Nota: ");
        scanf("%i", &notas[x]);
    }
}

float promedio(int notas[5])
{
    int x;
    float total = 0;
    float promedio = 0;
    for(x = 0; x < 5;x++)
    {
        total += notas[x];
    }
    promedio = total / 5;
    return promedio;
}


void mayor(float promedio1, float promedio2)
{
    if(promedio1 > promedio2)
        printf("Es mayor el promedio 1");
    else
        if(promedio2 > promedio1)
            printf("Es mayor el promedio 2");
}

int main()
{
    int cursoA[5];
    int cursoB[5];
    printf("Curso 1\n");
    cargar(cursoA);
    printf("Curso 2\n");
    cargar(cursoB);
    mayor(promedio(cursoA), promedio(cursoB));
    return 0;
}

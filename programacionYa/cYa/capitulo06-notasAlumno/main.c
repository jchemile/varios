#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float promedio;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;

    if( promedio >= 7)
    {
        printf("Promocionado");
    }
    else
    {
        printf("No promocionado");
    }
    getch();
    return 0;
}

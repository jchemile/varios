#include <stdio.h>
#include <stdlib.h>

void cargar(char nombres[5][41], int edades[5])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("Cargar Nombre:");
        gets(nombres[f]);
        printf("Edad:");
        scanf("%i", &edades[f]);
        fflush(stdin);
    }
}

void mayorDeEdad(char nombres[5][41], int edades[5])
{
    int f;
    printf("Personas mayores de edad.\n");
    for(f = 0; f < 5; f++)
    {
        if(edades[f]>=18)
            printf("%s\n", nombres[f]);
    }
}

int main()
{
    char nombres[5][41];
    int edades[5];
    cargar(nombres, edades);
    mayorDeEdad(nombres, edades);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre1[31], nombre2[31];
    printf("Primero: ");
    gets(nombre1);
    printf("Segundo: ");
    gets(nombre2);

    if(strcmp(nombre1, nombre2) == 0)
        printf("Nombres iguales");
    else
        if(strcmp(nombre1, nombre2) > 0)
            printf("%s es alfabeticamente mayor", nombre1);
        else
            printf("%s es alfabeticamente mayor", nombre2);
    return 0;
}

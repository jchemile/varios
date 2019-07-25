#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre1[30], nombre2[30];

    printf("Nombre 1: ");
    gets(nombre1);
    printf("Nombre 2: ");
    gets(nombre2);

    if(strlen(nombre1) > strlen(nombre2))
    {
        printf("%s\n", nombre1);
        printf("%s", nombre2);
    }
    else
    if(strlen(nombre1) < strlen(nombre2))
    {
        printf("%s\n", nombre2);
        printf("%s", nombre1);
    }
    else
    {
        printf("IGUALES");
    }

    return 0;
}

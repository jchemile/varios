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

    if(strcmp(nombre1, nombre2) < 0)
    {
        printf("%s\n", nombre1);
        printf("%s", nombre2);
    }
    else
    if(strcmp(nombre1, nombre2) > 0)
    {
        printf("%s\n", nombre2);
        printf("%s", nombre1);
    }


    return 0;
}

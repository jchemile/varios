#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre1[30], nombre2[30], nombre3[30], coleccion[100];
    char primero[30], segundo[30], tercero[30];

    printf("Nombre 1: ");
    gets(nombre1);
    printf("Nombre 2: ");
    gets(nombre2);
    printf("Nombre 3: ");
    gets(nombre3);

    if((strcmp(nombre1, nombre2) < 0) && (strcmp(nombre1, nombre3) < 0))
    {
        strcpy(primero, nombre1);
        if(strcmp(nombre2, nombre3) < 0)
        {
            strcpy(segundo, nombre2);
            strcpy(tercero, nombre3);
        }
        else
        if(strcmp(nombre2, nombre3) > 0)
        {
            strcpy(segundo, nombre3);
            strcpy(tercero, nombre2);
        }
    }
    else
    if(strcmp(nombre2, nombre3) < 0)
    {
        strcpy(primero, nombre2);
        if(strcmp(nombre1, nombre3) < 0)
        {
            strcpy(segundo, nombre1);
            strcpy(tercero, nombre3);
        }
        if(strcmp(nombre1, nombre3) > 0)
        {
            strcpy(segundo, nombre3);
            strcpy(tercero, nombre1);
        }
    }
    else
    if(strcmp(nombre2, nombre1) > 0)
    {
        strcpy(primero, nombre3);
        if(strcmp(nombre2, nombre1) < 0)
        {
            strcpy(segundo, nombre2);
            strcpy(tercero, nombre1);
        }
        else
        if(strcmp(nombre2, nombre1) > 0)
        {
            strcpy(segundo, nombre1);
            strcpy(tercero, nombre2);
        }
    }

    strcpy(coleccion, primero);
    strcat(coleccion, " ");
    strcat(coleccion, segundo);
    strcat(coleccion, " ");
    strcat(coleccion, tercero);

    printf("En orden: %s", coleccion);
    return 0;
}

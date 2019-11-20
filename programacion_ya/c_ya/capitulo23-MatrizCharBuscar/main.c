#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f = 0; f < 5; f++)
    {
        printf("Nombre:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    printf("Listado de nombres");
    for(f = 0; f < 5; f++)
    {
        printf("%s\n", nombres[f]);
    }
}

void consulta(char nombre[5][41])
{
    int f;
    char nom[41];
    int existe = 0;
    printf("Ingrese el nombre a buscar:");
    gets(nom);
    for(f = 0; f < 5; f++)
    {
        if(strcmp(nom, nombre[f]) == 0)
        {
            existe = 1;
        }
    }

    if(existe == 1)
        printf("Existe");
    else
        printf("No Existe");
}


int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consulta(nombres);
    return 0;
}

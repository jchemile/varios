#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre1[30], nombre2[30], nombreLargo[30];
    printf("Primer nombre: ");
    gets(nombre1);
    printf("Segundo nombre: ");
    gets(nombre2);

    if(strlen(nombre1) > strlen(nombre2))
        strcpy(nombreLargo, nombre1);
    else
        if(strlen(nombre1) < strlen(nombre2))
            strcpy(nombreLargo, nombre2);

    printf("Nombre con mas caracteres: %s", nombreLargo);
    return 0;
}

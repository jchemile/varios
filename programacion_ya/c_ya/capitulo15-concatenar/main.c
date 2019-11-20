#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[30], apellido[30], nombreYApellido[60];
    printf("Nombre: ");
    gets(nombre);
    printf("Apellido: ");
    gets(apellido);
    strcpy(nombreYApellido, nombre);
    strcat(nombreYApellido, " ");
    strcat(nombreYApellido, apellido);
    printf("Nombre completo: %s", nombreYApellido);
    return 0;
}

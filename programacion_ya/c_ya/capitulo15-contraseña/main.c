#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char usuario[30], passAlfabetico[30], passNumerico[30], passcompleto[30];
    char passValido[] = "abc123";

    printf("Usuario: ");
    gets(usuario);
    printf("Clave alfabetica: ");
    gets(passAlfabetico);
    printf("Clave numerica: ");
    gets(passNumerico);

    strcpy(passcompleto, passAlfabetico);
    strcat(passcompleto, passNumerico);

    if(strcmp(passcompleto, passValido) == 0)
        printf("Correcto");
    else
        printf("Incorrecto");

    return 0;
}

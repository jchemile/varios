#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarClave()
{
    char clave[50];
    int intentos = 0;
    do{
        if(intentos == 3)
            exit(1);
        printf("Ingrese clave: ");
        gets(clave);
        intentos++;
    } while(strcmp(clave, "123abc")!= 0);
}

int main()
{
    ingresarClave();
    printf("Bienvenido\n");
    return 0;
}

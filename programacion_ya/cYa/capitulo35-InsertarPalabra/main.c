#include <stdio.h>
#include <stdlib.h>

#define LARGO 40

void cargar(char *palabra)
{
    printf("Ingresar palabra: ");
    gets(palabra);
}

void imprimir(char *palabra)
{
    printf("La palabra es: %s", palabra);
}

int main()
{
    char pal[LARGO];
    cargar(pal);
    imprimir(pal);
    return 0;
}

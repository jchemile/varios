#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[20];
    printf("Palabra: ");
    gets(palabra);
    int caracter;

    caracter = 0;

    while(palabra[caracter] != '\0')
    {
        caracter++;
    }

    printf("Caracteres: %i", caracter);
    return 0;
}

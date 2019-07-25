#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char palabra[31];
    printf("Palabra: ");
    gets(palabra);

    int cant = strlen(palabra);

    printf("%s tiene %i caracteres", palabra, cant);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palabra;
    int tamPalabra, f;

    printf("Longitud palabra: ");
    scanf("%i", &tamPalabra);

    fflush(stdin);

    palabra = malloc(tamPalabra*sizeof(char)+1);

    printf("Ingrese palabra:");
    gets(palabra);

    printf("Palabra: %s",palabra);


    free(palabra);
    return 0;
}

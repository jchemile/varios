#include <stdio.h>
#include <stdlib.h>

int largo(char *cadena)
{
    int contador;
    char *caracter;
    contador = 0;
    caracter = cadena;

    while(*caracter != '\0')
    {
        contador++;
        caracter++;
    }
    return contador;
}

int main()
{
    printf("Arranca\n");
    char cadena[20] = "Hola";
    printf("Asignó cadena");
    printf("Largo: %i",largo(cadena));
    return 0;
}

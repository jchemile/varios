#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[40];
    int contadorCaracter;

    printf("Ingrese palabra en minuscula: ");
    gets(palabra);

    contadorCaracter = 0;

    while(palabra[contadorCaracter] != '\0')
    {
        if(palabra[contadorCaracter] == 'a' || palabra[contadorCaracter] == 'e' ||
           palabra[contadorCaracter] == 'i' || palabra[contadorCaracter] == 'o' || palabra[contadorCaracter] == 'u')
            palabra[contadorCaracter] = '-';

        contadorCaracter++;
    }

    printf("Resultante: %s", palabra);


    return 0;
}

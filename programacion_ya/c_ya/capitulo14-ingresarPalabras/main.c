#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oracion[200];
    int palabras, contadorCaracteres;
    printf("Oracion: ");
    gets(oracion);

    contadorCaracteres = 0;
    palabras = 1;

    while(oracion[contadorCaracteres] != '\0')
    {
        if(oracion[contadorCaracteres] == ' ')
            palabras++;

        contadorCaracteres++;
    }
    printf("Palabras: %i", palabras);
    return 0;
}

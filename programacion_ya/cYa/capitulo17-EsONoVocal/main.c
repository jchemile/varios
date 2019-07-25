#include <stdio.h>
#include <stdlib.h>

void esVocal(char caracter)
{
    if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
       caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
        printf("Es vocal");
    else
        printf("No es vocal");
}

int main()
{
    char caracter;
    printf("Caracter:");
    scanf(" %c", &caracter);
    esVocal(caracter);

    return 0;
}

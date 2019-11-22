#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[50];
    int f;
    int vocales = 0;
    int consonantes = 0;
    printf("PALABRA:");
    gets(palabra);
    for(f = 0; f < strlen(palabra);f++)
    {
        switch(palabra[f])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vocales++;
                break;
            default:
                consonantes++;
        }
    }

    printf("VOCALES: %i\n", vocales);
    printf("CONSONANTES: %i\n", consonantes);
    return 0;
}

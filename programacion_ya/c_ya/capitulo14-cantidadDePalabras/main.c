#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[30];
    printf("Ingrese una palabra en minuscula: ");
    gets(palabra);
    int cant, x;

    cant = 0;
    x = 0;

    while(palabra[x] != '\0')
    {
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u')
        {
            cant++;
        }
        x++;
    }

    printf("Vocales: %i", cant);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void cargar(char palabra[40])
{
    printf("Ingrese una palabra:");
    gets(palabra);
}

int cantidadDeVocales(char palabra[40])
{
    int cant = 0;
    int x = 0;
    while(palabra[x] != '\0')
    {
        if (palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u' ||
            palabra[x] == 'A' || palabra[x] == 'E' || palabra[x] == 'I' || palabra[x] == 'O' || palabra[x] == 'U')
                cant++;
            x++;
    }
    return cant;
}

int main()
{
    char pal[40];
    cargar(pal);
    int cant = cantidadDeVocales(pal);
    printf("Cantidad de %s es %i", pal, cant);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void mostrarGenero(char tipo)
{
    if (tipo == 'h' || tipo == 'H')
        printf("Hombre\n");
    else
        if (tipo == 'm' || tipo == 'M')
            printf("Mujer\n");

}


int main()
{
    mostrarGenero('h');
    mostrarGenero('m');
    return 0;
}

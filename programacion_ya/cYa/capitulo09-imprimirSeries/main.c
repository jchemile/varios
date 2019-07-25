#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorInicial, contador, resultado;

    valorInicial = 11;
    contador = 1;

    while (contador <= 25)
    {
        resultado = valorInicial * contador;
        printf("Termino %i resultado %i\n", contador, resultado);
        contador++;
    }
    return 0;
}

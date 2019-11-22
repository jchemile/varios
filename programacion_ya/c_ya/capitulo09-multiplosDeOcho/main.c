#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorInicial, contador, resultadoFinal;

    valorInicial = 8;
    contador = 1;
    resultadoFinal = valorInicial * contador;



    while(resultadoFinal < 500)
    {
        printf("%i X %i = %i\n", valorInicial, contador, resultadoFinal);
        contador++;
        resultadoFinal = valorInicial * contador;
    }
    return 0;
}

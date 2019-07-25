#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, cantidadDeNotas, mayorOIgualASiete, menorASiete;

    cantidadDeNotas = 1;
    mayorOIgualASiete = 0;
    menorASiete = 0;



    while(cantidadDeNotas <= 10)
    {
        printf("Por favor ingrese la nota entre 1 y 10: ");
        scanf("%i", &nota);

        if(nota >= 7)
            mayorOIgualASiete++;
        else
            if(nota < 7)
                menorASiete++;

        cantidadDeNotas++;
    }

    printf("Cantidad de notas mayores o iguales a 7 %i\n", mayorOIgualASiete);
    printf("Cantidad de notas menores a 7 %i", menorASiete);
    return 0;
}

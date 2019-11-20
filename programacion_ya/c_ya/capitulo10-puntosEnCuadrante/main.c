#include <stdio.h>
#include <stdlib.h>

int main()
{
    int puntosAingresar, puntosIngresados;
    int coordenadaX, coordenadaY;
    int primero, segundo, tercero, cuarto;

    primero = segundo = tercero = cuarto = 0;


    printf("Cuantos pares ordenados ingresara: ");
    scanf("%i", &puntosAingresar);

    for(puntosIngresados = 1; puntosIngresados <= puntosAingresar; puntosIngresados++)
    {
        printf("\nPar ordenado %i", puntosIngresados);
        printf("\nCordenada X: ");
        scanf("%i", &coordenadaX);
        printf("Cordenada Y: ");
        scanf("%i", &coordenadaY);

        if(coordenadaX > 0 && coordenadaY > 0)
            primero++;
        else
            if(coordenadaX < 0 && coordenadaY > 0)
                segundo++;
        else
                if(coordenadaX < 0 && coordenadaY < 0)
                    tercero++;
        else
                    if(coordenadaX > 0 && coordenadaY < 0)
                        cuarto++;
    }

    printf("Primer cuadrante: %i", primero);
    printf(" Segundo cuadrante: %i", segundo);
    printf(" Tercero cuadrante: %i", tercero);
    printf(" Cuarto cuadrante: %i", cuarto);
    return 0;
}

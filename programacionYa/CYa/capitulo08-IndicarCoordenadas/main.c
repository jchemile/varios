#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coordenadaY, coordenadaX;

    printf("Por favor ingrese valor de X ");
    scanf("%i", &coordenadaX);
    printf("Por favor ingrese el valor de Y ");
    scanf("%i", &coordenadaY);

    if(coordenadaX > 0 && coordenadaY > 0)
        printf("Primer cuadrante");
            else
                if(coordenadaX < 0 && coordenadaY > 0)
                    printf("Segundo cuadrante");
                        else
                            if(coordenadaX < 0 && coordenadaY < 0)
                                printf("Tercer cuadrante");
                                    else
                                        if(coordenadaX > 0 && coordenadaY < 0)
                                            printf("Cuarto cuadrante");
                                                else
                                                    printf("Está en el origen");

    return 0;
}

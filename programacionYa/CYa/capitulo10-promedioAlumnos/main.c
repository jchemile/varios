#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contador;
    float edad;
    float totalManana, totalTarde, totalNoche;
    float promManana, promTarde, promNoche;

    totalManana = totalNoche = totalTarde = 0;
    promManana = promTarde = promNoche = 0;


    //MAÑANA
    for(contador = 0; contador < 5; contador++)
    {
        printf("Turno Manana. Alumno %i: ", contador);
        scanf("%f", &edad);
        totalManana += edad;
    }
    promManana = totalManana / contador;
    contador = 0;

    //TARDE
    for(contador = 0; contador < 6; contador++)
    {
        printf("Turno Tarde. Alumno %i: ", contador);
        scanf("%f", &edad);
        totalTarde += edad;
    }
    promTarde = totalTarde / contador;
    contador = 0;

    //NOCHE
    for(contador = 0; contador < 11; contador++)
    {
        printf("Turno Noche. Alumno %i: ", contador);
        scanf("%f", &edad);
        totalNoche += edad;
    }
    promNoche = totalNoche / contador;
    contador = 0;

    printf("Manana: %f, tarde: %f, noche: %f", promManana, promTarde, promNoche);

    if(promManana > promTarde && promManana > promNoche)
        printf("\nPromedio Manana Mayor");
            else
                if(promTarde > promNoche)
                    printf("\nPromedio tarde es mayor");
                        else
                            printf("\nPromedio noche es mayor");




    return 0;
}

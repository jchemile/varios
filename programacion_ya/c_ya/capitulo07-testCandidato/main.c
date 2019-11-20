#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preguntasRealizadas, preguntasContestadas, promedio;

    printf("Ingrese cantidad de preguntas realizadas: ");
    scanf("%f", &preguntasRealizadas);
    printf("Ingrese cantidad de preguntas correctas: ");
    scanf("%f", &preguntasContestadas);

    promedio = preguntasContestadas/preguntasRealizadas;

    if(promedio < 0.5)
        printf("Fuera de nivel");
        else
            if(promedio >= 0.5 && promedio < 0.75)
                printf("Nivel regular");
                else
                    if(promedio >= 0.75 && promedio < 0.9)
                        printf("Nivel medio");
                        else
                            if(promedio >= 0.9)
                                printf("Nivel maximo");


    return 0;
}

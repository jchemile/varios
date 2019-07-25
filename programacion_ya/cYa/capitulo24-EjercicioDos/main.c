#include <stdio.h>
#include <stdlib.h>

void cargarAlumno(char alumnos[4][25], int nota[5])
{
    int f;
    for(f = 0; f < 4; f++)
    {
        printf("Nombre:");
        gets(alumnos[f]);
        printf("Nota:");
        scanf("%i",&nota[f]);
        fflush(stdin);
    }
}

void condicionAlumno(char alumnos[4][25], int nota[5], int *cantidadMuyBuenos)
{
    int f;
    for(f = 0; f < 4; f++)
    {
        printf("--------------- ALUMNO %s ---------------", alumnos[f]);
        printf("Nombre: %s\n", alumnos[f]);
        printf("Nota: %i\n", nota[f]);
        if(nota[f]>=8)
        {
            printf("Condicion: Muy bueno\n");
            cantidadMuyBuenos++;
        }
        else
        {
            if(nota[f] < 8 && nota[f] >= 4)
                printf("Condicion: Bueno\n");
            else
            {
                if(nota[f] < 4)
                    printf("Condicion: Insuficiente\n");
            }

        }

    }
    printf("-------------------------------");
}

int main()
{
    char alumnos[5][25];
    float notas[5];
    int muyBueno;
    cargarAlumno(alumnos, notas);
    condicionAlumno(alumnos, notas, muyBueno);
    printf("\nMuy buenos: %i", muyBueno);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANTEMPLEADOS 3
#define MESES 3

void cargar(char empleados[CANTEMPLEADOS][40], float sueldos[CANTEMPLEADOS][MESES])
{
    int f, c;
    for(f = 0; f < CANTEMPLEADOS; f++)
    {
        printf("Nombre:");
        gets(empleados[f]);
        for(c= 0; c < MESES; c++)
        {
            printf("Sueldo mes %i: ", c+1);
            scanf("%f", &sueldos[f][c]);
            fflush(stdin);
        }
    }

}

void calcularSumaSueldos(float sueldos[CANTEMPLEADOS][MESES], float sueldostot[CANTEMPLEADOS])
{
    int f, c;
    float suma;
    for(f = 0; f < CANTEMPLEADOS; f++)
    {
        suma = 0;
        for(c= 0; c < MESES; c++)
        {
            suma = suma + sueldos[f][c];
        }
        sueldostot[f] = suma;
    }

}

void imprimirTotalPagado(char empleados[CANTEMPLEADOS][40], float sueldostot[CANTEMPLEADOS])
{
    int f;
    printf("Total de sueldos pagados por empleados.\n");
    for(f = 0; f < CANTEMPLEADOS; f++)
    {
        printf("%s - %0.2f\n", empleados[f], sueldostot[f]);
    }
}

void empleadoMayorSueldo(char empleados[CANTEMPLEADOS][40], float sueldostot[CANTEMPLEADOS] )
{
    int f;
    float may = sueldostot[0];
    char nom[40];
    strcpy(nom, empleados[0]);
    for(f = 0; f < CANTEMPLEADOS; f++)
    {
        if(sueldostot[f] > may)
        {
            may = sueldostot[f];
            strcpy(nom, empleados[f]);
        }
    }
    printf("El empleado con mayor sueldo es %s que tiene un sueldo acumulado de %0.2f", nom, may);
}

int main()
{
    char empleados[CANTEMPLEADOS][40];
    float sueldos[CANTEMPLEADOS][MESES];
    float sueldostot[CANTEMPLEADOS];
    cargar(empleados, sueldos);
    calcularSumaSueldos(sueldos, sueldostot);
    imprimirTotalPagado(empleados, sueldostot);
    empleadoMayorSueldo(empleados, sueldostot);

    return 0;
}

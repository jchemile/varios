#include <stdio.h>
#include <stdlib.h>

void calcularSueldo(float costoHora, int cantidadHoras)
{
    float sueldo = costoHora * cantidadHoras;
    printf("Sueldo: %0.2f\n", sueldo);
}


int main()
{
    float costoHora;
    int cantidadHoras;
    char opcion;

    do
    {
        printf("Cuanto paga la hora: ");
        scanf("%f", &costoHora);
        printf("Horas Trabajadas: ");
        scanf("%i", &cantidadHoras);
        calcularSueldo(costoHora, cantidadHoras);

        printf("Calcula otro sueldo [s/n]:");
        scanf(" %c", &opcion);
    } while(opcion == 's');
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i",&horasTrabajadas);
    printf("Ingrese el costo por hora: ");
    scanf("%f",&costoHora);

    sueldo = horasTrabajadas*costoHora;
    printf("El sueldo total del operario es: ");
    printf("%f", sueldo);
    getchar();
    return 0;
}

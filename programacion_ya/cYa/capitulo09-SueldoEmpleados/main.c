#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sueldo, entreCienYTrescientos, masDeTrescientos, totalGastado, cantidadDeEmpleados, ingresados;

    ingresados = 1;
    entreCienYTrescientos = 0;
    masDeTrescientos = 0;
    totalGastado = 0;

    printf("Cuantos empleados cargara: ");
    scanf("%i", &cantidadDeEmpleados);

    while(ingresados <= cantidadDeEmpleados)
    {
        printf("Ingrese el sueldo del empleado: ");
        scanf("%i", &sueldo);

        totalGastado += sueldo;

        if(sueldo >= 100 && sueldo <= 300)
        {
            entreCienYTrescientos++;
        }
        else
        {
            if(sueldo > 300)
                masDeTrescientos++;
        }

        ingresados++;
    }

    printf("Entre 100 y 300 %i. Mas de trescientos %i. Total gastado: %i", entreCienYTrescientos, masDeTrescientos, totalGastado);

    return 0;
}

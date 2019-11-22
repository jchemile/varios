#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sueldo, sueldoAumentado;
    int antiguedad;


    printf("Por favor ingrese el sueldo ");
    scanf("%f", &sueldo);
    printf("Por favor ingrese el antiguedad ");
    scanf("%i", &antiguedad);

    if(sueldo < 500 && antiguedad >= 10)
    {
        sueldoAumentado = sueldo + sueldo*0.2;
        printf("Su nuevo sueldo es %.2f", sueldoAumentado);
    }
    else
    if(sueldo < 500 && antiguedad < 10)
    {
        sueldoAumentado = sueldo + sueldo*0.05;
        printf("Su nuevo sueldo es %.2f", sueldoAumentado);
    }
    else
    if(sueldo >= 500)
    {
        sueldoAumentado = sueldo;
        printf("Su nuevo sueldo es %.2f", sueldoAumentado);
    }
    return 0;
}

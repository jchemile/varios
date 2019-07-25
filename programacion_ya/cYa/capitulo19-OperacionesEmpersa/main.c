#include <stdio.h>
#include <stdlib.h>

void cargar(float sueldo[6])
{
    int x;
    for(x = 0; x < 6; x++)
    {
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldo[x]);
    }
}

void imprimir(float sueldos[6])
{
    int x;
    printf("Listado completo de sueldos\n");
    for(x = 0; x < 6; x++)
    {
        printf("%0.2f\n",sueldos[x]);
    }
}

void calcularGastos(float sueldos[6])
{
    float total = 0;
    int x;
    for(x = 0; x < 6;x++)
    {
        total = total + sueldos[x];
    }

    printf("Gasto total en sueldos de la empresa: %0.2f", total);
}

int main()
{
    float sueldos[6];
    cargar(sueldos);
    imprimir(sueldos);
    calcularGastos(sueldos);
    return 0;
}

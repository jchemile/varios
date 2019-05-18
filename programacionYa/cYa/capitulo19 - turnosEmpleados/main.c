#include <stdio.h>
#include <stdlib.h>

void cargar(float sueldos[4])
{
    int x;
    for(x = 0; x < 4; x++)
    {
        printf("Sueldo: ");
        scanf("%f", &sueldos[x]);
    }
}

float gastosTurnos(float sueldos[4])
{
    int x;
    float suma;
    suma = 0;
    for(x = 0; x < 4; x++)
    {
        suma += sueldos[x];
    }
    return suma;
}

void imprimir(float vector[4])
{
    int x;
    for(x = 0; x < 4; x++)
    {
        printf("%f", vector[x]);
    }
}

int main()
{
    float sueldoMa[4];
    float sueldoTar[4];
    printf("Carga de sueldos del turno manana\n");
    cargar(sueldoMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldoTar);
    printf("Total Manana %0.2f\n", gastosTurnos(sueldoMa));
    printf("Total Tarde %0.2f\n", gastosTurnos(sueldoTar));
    return 0;
}

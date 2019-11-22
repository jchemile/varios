#include <stdio.h>
#include <stdlib.h>

#define TAMANO 5
#define FINDEPROGRAMA "Gracias por utilizar nuestro programa"

void cargar(float sueldos[])
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("Sueldo: ");
        scanf("%f",&sueldos[f]);
    }
}

void imprimir(float sueldos[])
{
    int f;
    printf("Listado de sueldos: \n");
    for(f = 0; f < TAMANO; f++)
    {
        printf("%0.2f\n", sueldos[f]);
    }
}

int main()
{
    float sueldos[TAMANO];
    cargar(sueldos);
    imprimir(sueldos);
    printf(FINDEPROGRAMA);
    return 0;
}

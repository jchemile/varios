#include <stdio.h>
#include <stdlib.h>

void cargar(float vector[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("Valor: ");
        scanf("%f", &vector[x]);
    }
}

void imprimir(float vector[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("%f ", vector[x]);
    }
}

float promedio(float vector[5])
{
    float suma, promedio;
    int x;
    for(x = 0; x < 5; x++)
    {
        suma += vector[x];
    }
    promedio = suma / 5.0;
    return promedio;
}

void altasBajas(float alturas[5], float pro)
{
    int x, altas = 0, bajas = 0;
    for(x = 0; x < 5; x++)
    {
        if(alturas[x] > pro)
            altas++;
        else
            if(alturas[x] < pro)
                bajas++;
    }
    printf("Altas: %i. Bajas: %i", altas, bajas);
}

int main()
{
    float vector[5];
    cargar(vector);
    float prom = promedio(vector);
    altasBajas(vector, prom);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[8])
{
    int x;
    for(x = 0; x < 8; x++)
    {
        printf("Valor: ");
        scanf("%i", &vector[x]);
    }
}

int sumar(int vector[8])
{
    int x, total;
    total = 0;
    for(x = 0; x < 8; x++)
    {
        total += vector[x];
    }
    return total;
}

int mayoresDe36(int vector[8])
{
    int x, total;
    total = 0;
    for(x = 0; x < 8; x++)
    {
        if(vector[x] > 36)
        {
            total += vector[x];
        }
    }
    return total;
}

int mayoresDe50(int vector[8])
{
    int x, total;
    total = 0;
    for(x = 0; x < 8; x++)
    {
        if(vector[x] > 50)
        {
            total += vector[x];
        }
    }
    return total;
}

int main()
{
    int vector[8];
    cargar(vector);
    printf("Acumulado: %i\n", sumar(vector));
    printf("Acumulado mayores 36: %i\n", mayoresDe36(vector));
    printf("Acumulado mayores 50: %i\n", mayoresDe50(vector));
    return 0;
}

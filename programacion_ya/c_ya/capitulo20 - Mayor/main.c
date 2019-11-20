#include <stdio.h>
#include <stdlib.h>

void cargar(int vector[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("Valor: ");
        scanf("%i", &vector[x]);
    }
}

void mayor(int vector[5])
{
    int may = vector[0];
    int pos = 0;
    int x;

    for(x = 1; x < 5; x++)
    {
        if(vector[x] > may)
        {
            may = vector[x];
            pos = x;
        }
    }

    printf("Mayor elemento: %i. Posicion: %i", may, pos);
}

int main()
{
    int vector[5];
    cargar(vector);
    mayor(vector);
    return 0;
}

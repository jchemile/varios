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

void menorYRepite(int vector[5])
{
    int x, menor, pos;
    int repite = 0;

    for(x = 0; x < 5; x++)
    {
        if(vector[x] < menor || x == 0)
        {
            menor = vector[x];
            pos = x;
        }
    }

    for(x = 0; x < 5; x++)
    {
        if(vector[x] == menor)
            repite++;
    }

    printf("Menor: %i. Posicion: %i\n", menor, pos);
    if(repite > 1)
        printf("Se Repite el menor");
    else
        if(repite <= 1)
            printf("No se repite el menor");
}

int main()
{
    int vector[5];
    cargar(vector);
    menorYRepite(vector);

    return 0;
}

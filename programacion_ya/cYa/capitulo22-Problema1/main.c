#include <stdio.h>
#include <stdlib.h>

void cargar(int matriz[2][5])
{
    int f, c;
    for(c = 0; c < 5; c++)
    {
        for(f = 0; f < 2; f++)
        {
            printf("Fila  %i. Columna %i: ", f, c);
            scanf("%i", &matriz[f][c]);
        }
    }
}

void imprimir(int matriz[2][5])
{
    int f, c;
    for(f = 0;  f < 2; f++)
    {
        for(c = 0; c < 5; c++)
        {
            printf(" |%i| ", matriz[f][c]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    return 0;
}

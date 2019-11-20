#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int matriz[2][5])
{
    int f, c;
    for(f = 0; f < 2; f++)
    {
        for(c = 0; c < 5; c++)
        {
            printf("Fila %i. Columna %i: ", f, c);
            scanf("%i", &matriz[f][c]);
        }
    }
}

void imprimir(int matriz[2][5])
{
    int f, c;
    printf("Matriz Normal\n");
    for(f = 0; f < 2; f++)
    {
        for(c = 0; c < 5; c++)
        {
            printf(" |%i| ", matriz[f][c]);
        }
        printf("\n");
    }
}

void imprimirIntercambiado(int matriz[2][5])
{
    int f, c;
    printf("Matriz Invertida\n");
    for(f = 1; f >= 0; f--)
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
    cargarMatriz(matriz);
    imprimir(matriz);
    imprimirIntercambiado(matriz);
    return 0;
}

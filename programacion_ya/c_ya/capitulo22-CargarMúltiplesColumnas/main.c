#include <stdio.h>
#include <stdlib.h>

void cargar(int mat[3][4])
{
    int f, c;
    for(f = 0; f < 3;f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf("Fila %i. Columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
        }
    }
}

void primeraFila(int mat[3][4])
{
    int c;
    printf("Primera fila de la matriz\n");
    for(c = 0; c < 4; c++)
    {
        printf(" |%i| ", mat[0][c]);
    }
    printf("\n");
}

void ultimaFila(int mat[3][4])
{
    int c;
    printf("Ultima fila de la matriz\n");
    for(c = 0; c < 4; c++)
    {
        printf(" |%i| ", mat[2][c]);
    }
    printf("\n");
}

void primeraColumna(int mat[3][4])
{
    int f;
    printf("Primera columna\n");
    for(f = 0; f < 3; f++)
    {
        printf(" |%i| ", mat[f][0]);
    }
}

void imprimir(int mat[3][4])
{
    int f, c;
    printf("Matriz completa\n");
    for(f = 0; f < 3; f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf(" |%i| ", mat[f][c]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][4];
    cargar(mat);
    imprimir(mat);
    primeraFila(mat);
    ultimaFila(mat);
    primeraColumna(mat);

    return 0;
}

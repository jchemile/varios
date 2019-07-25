#include <stdio.h>
#include <stdlib.h>

void cargar(int mat[4][4])
{
    int f, c;
    for(f = 0; f < 4; f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf("Componente: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimirDiagonalPrincipal(int mat[4][4])
{
    int k;
    for(k = 0; k < 4 ; k++)
    {
        printf("%i ", mat[k][k]);
    }
}

void imprimir(int mat[4][4])
{
    int f, c;
    for(f = 0; f < 4; f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf(" |%i| ",mat[f][c]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[4][4];
    cargar(mat);
    imprimirDiagonalPrincipal(mat);
    //imprimir(mat);
    return 0;
}

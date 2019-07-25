#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3

void cargar(int mat[FILAS][COLUMNAS])
{
    int f, c;
    for(f = 0; f < FILAS; f++)
    {
        for(c = 0; c < COLUMNAS; c++)
        {
            printf("Ingres elemento [%i, %i]: ", f, c);
            scanf("%i",&mat[f][c]);
            if(mat[f][c] == 0)
            {
                goto salir;
            }
        }
    }
    return;
    salir: printf("CON UN CERO TERMINA LA CARGA DE ELEMENTOS\n");
}

void imprimir(int mat[FILAS][COLUMNAS])
{
    int f, c;
    for(f=0;f<FILAS;f++)
    {
        for(c=0;c<COLUMNAS;c++)
        {
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[FILAS][COLUMNAS] = {{0,0,0},
                                {0,0,0},
                                {0,0,0}};
    cargar(mat);
    imprimir(mat);
    return 0;
}

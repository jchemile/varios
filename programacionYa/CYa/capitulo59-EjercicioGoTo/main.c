#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3

void cargar(int matriz[FILAS][COLUMNAS])
{
    int f, c;
    for(f = 0; f < FILAS; f++)
    {
        for(c = 0; c < COLUMNAS; c++)
        {
            printf("Valor[%i %i]: ", f, c);
            scanf("%i", &matriz[f][c]);
        }
    }

}

void imprimir(int matriz[FILAS][COLUMNAS])
{
    int f, c;
    for(f = 0; f < FILAS; f++)
    {
        for(c = 0; c < COLUMNAS; c++)
        {
            printf("%i ", matriz[f][c]);
        }
        printf("\n");
    }

}

int buscar(int matriz[FILAS][COLUMNAS])
{
    int buscado, valorEncontrado, f, c;
    int encontrado = 0;
    int filaEncontrado = 0;
    int columnaEncontrado = 0;

    printf("Valor a Buscar: ");
    scanf("%i", &buscado);

    for(f = 0; f < FILAS; f++)
    {
        for(c = 0; c < COLUMNAS; c++)
        {
            if(buscado == matriz[f][c])
            {
                encontrado = 1;
                valorEncontrado = buscado;
                filaEncontrado = f;
                columnaEncontrado = c;
                goto encontrado;
            }

        }
    }
    printf("VALOR NO ENCONTRADO");
    return;
    encontrado: printf("Valor %i encontrado en la fila %i columna %i\n", valorEncontrado, filaEncontrado, columnaEncontrado);
}

int main()
{
    int matriz[FILAS][COLUMNAS];
    cargar(matriz);
    imprimir(matriz);
    buscar(matriz);
    return 0;
}

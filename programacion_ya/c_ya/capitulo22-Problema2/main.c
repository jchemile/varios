#include <stdio.h>
#include <stdlib.h>

void cargar(int matriz[3][4])
{
    int f, c;
    for(f = 0; f < 3; f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf("Fila %i. Columna %i: ", f, c);
            scanf("%i", &matriz[f][c]);
        }
    }
}

void imprimir(int matriz[3][4])
{
    int f, c;
    printf("Matriz completa\n");
    for(f = 0; f < 3; f++)
    {
        for(c = 0; c < 4; c++)
        {
            printf(" |%i| ", matriz[f][c]);
        }
        printf("\n");
    }
}

void obtenerMayor(int matriz[3][4])
{
    int f, c, mayor;
    for(f = 0; f < 3; f++)
    {
        for(c = 0; c < 4; c++)
        {
            if(matriz[f][c] > mayor || (f == 0 && c == 0))
                mayor = matriz[f][c];
        }
    }

    printf("El mayor es: %i", mayor);
}

int main()
{
    int matriz[3][4];
    cargar(matriz);
    imprimir(matriz);
    obtenerMayor(matriz);
    return 0;
}

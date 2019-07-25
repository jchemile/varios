#include <stdio.h>
#include <time.h>

#define CANTIDAD 10

enum texiste{NO, SI};

void cargar(int vec[CANTIDAD])
{
    int f;
    srand(time(NULL));
    for(f = 0; f < CANTIDAD; f++)
        vec[f]=rand()%100+1;
}

void imprimir(int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD;f++)
        printf("%i ", vec[f]);
    printf("\n\n");
}

void consulta(int vec[CANTIDAD])
{
    int f, valor;
    printf("Valor a buscar: ");
    scanf("%i", &valor);
    enum texiste existe = NO;
    for(f=0; f< CANTIDAD;f++)
        if(valor == vec[f])
            existe = SI;
    if(existe == SI)
        printf("EXISTE");
    else
        printf("NO EXISTE");
}

int main()
{
    int vec[CANTIDAD];
    cargar(vec);
    imprimir(vec);
    consulta(vec);
    return 0;
}

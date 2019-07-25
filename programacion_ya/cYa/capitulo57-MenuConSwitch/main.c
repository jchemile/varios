#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5

void cargar(int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD; f++)
    {
        printf("Indice %i: ", f);
        scanf("%i", &vec[f]);
    }
}

void imprimir(int vec[CANTIDAD])
{
    int f;
    for(f = 0; f < CANTIDAD; f++)
    {
        printf("INDICE %i - VALOR: %i\n", f, vec[f]);
    }
}

int mayor(int vec[CANTIDAD])
{
    int f, mayor;
    for(f = 0; f < CANTIDAD; f++)
    {
        if(f == 0 || vec[f] > mayor)
            mayor = vec[f];
    }
    return mayor;
}

int menor(int vec[CANTIDAD])
{
    int f, menor;
    for(f = 0; f < CANTIDAD; f++)
    {
        if(f == 0 || vec[f] < menor)
            menor = vec[f];
    }
    return menor;
}

void menu(int vec[CANTIDAD])
{
    int opciones;
    do{
        printf("1 - cargar el vector\n");
        printf("2 - mostrar el vector\n");
        printf("3 - imprimir el mayor\n");
        printf("4 - imprimir el menor\n");
        printf("5 - finalizar el programa\n");
        scanf("%i", &opciones);
        switch (opciones)
        {
            case 1:
                cargar(vec);
                break;
            case 2:
                imprimir(vec);
                break;
            case 3:
                printf("MAYOR %i\n", mayor(vec));
                break;
            case 4:
                printf("MENOR %i\n", menor(vec));
                break;
        }
    } while(opciones != 5);
}

int main()
{
    int vec[CANTIDAD];
    menu(vec);
    return 0;
}

#include<stdio.h>
#include"productos.h"

int main()
{
    tproducto productos[CANT];
    int opcion;
    do{
        printf("1 - Cargar de productos.\n");
        printf("2 - Listado de productos.\n");
        printf("3 - Finalizar el programa.\n");
        printf("Elija su opcion: \n");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                cargar(productos);
                break;
            case 2:
                imprimir(productos);
                break;
        }
    } while(opcion != 3);
}

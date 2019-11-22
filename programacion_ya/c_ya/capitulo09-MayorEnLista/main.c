#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista, valor, acumulado, ingresados;
    int acumuladoListaUno, acumuladoListaDos;


    acumuladoListaUno = 0;
    acumuladoListaDos = 0;
    lista = 1;
    ingresados = 1;
    acumulado = 0;

    while(lista <= 2)
    {
        while(ingresados <= 5)
        {
            printf("Por favor ingrese el valor %i para la lista %i: ", ingresados, lista);
            scanf("%i", &valor);

            acumulado += valor;

            ingresados++;
        }

        if(lista == 1)
        {
            acumuladoListaUno = acumulado;
            acumulado = 0;
        }
        else
        {
            if (lista == 2)
            {
                acumuladoListaDos = acumulado;
                acumulado = 0;
            }
        }

        lista++;
        ingresados = 1;
    }

    if(acumuladoListaUno > acumuladoListaDos)
        printf("Lista uno es mayor");
        else
            if(acumuladoListaDos > acumuladoListaUno)
                printf("Lista dos es mayor");
        else
            printf("Son iguales");


    return 0;
}

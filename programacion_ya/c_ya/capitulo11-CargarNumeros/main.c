#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma, cant, valor, promedio;
    suma = 0;
    cant = 0;

    do{
        printf("Valor: ");
        scanf("%i", &valor);

        if(valor != 0)
        {
            suma = suma+valor;
            cant++;
        }
    } while (valor != 0);

    if(cant != 0)
    {
        promedio = suma/cant;
        printf("Promedio: %i", promedio);
    }
    else
    {
        printf("No se ingresaron valores");
    }


    return 0;
}

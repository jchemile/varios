#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, acumulado;

    acumulado = 0;
    valor = 0;

    do{
            acumulado += valor;

            printf("Ingrese valor. Con 9999 finaliza: ");
            scanf("%i", &valor);

    }while(valor != 9999);

    printf("Acumulado: %i", acumulado);


    return 0;
}

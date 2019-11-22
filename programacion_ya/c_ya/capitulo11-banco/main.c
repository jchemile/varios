#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cuenta, saldo;

    printf("Cuenta: ");
    scanf("%i", &cuenta);

    do{
        printf("Saldo: ");
        scanf("%i", &saldo);

        if(saldo > 0)
            printf("Acreedor\n");
        else
            if(saldo == 0)
                printf("Nulo\n");
            else
                printf("Deudor\n");


    printf("Cuenta: ");
    scanf("%i", &cuenta);

    }while (cuenta >= 0);
    return 0;
}

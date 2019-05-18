#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cant1, cant2, cant3, suma;
    float peso;

    cant1 = 0;
    cant2 = 0;
    cant3 = 0;

    do{
        printf("Peso (Con cero finaliza): ");
        scanf("%f", &peso);
        if(peso > 10.2)
            cant1++;
        else
            if(peso >= 9.8)
                cant2++;
            else
                if(peso > 0)
                    cant3++;
    }while(peso != 0);

    suma = cant1 + cant2 + cant3;

    printf("Aptas: %i\n", cant2);
    printf("Superior a 10.2: %i\n", cant1);
    printf("Inferior a 9.8: %i\n", cant3);
    return 0;
}

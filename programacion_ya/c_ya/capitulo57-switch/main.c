#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Ingrese valor[entre 1 y 5]");
    scanf("%i", &valor);
    switch(valor){


        case 1:
            printf("Uno");
            break;
        case 2:
            printf("dos");
            break;
        case 3:
            printf("tres");
            break;
        case 4:
            printf("cuatro");
            break;
        case 5:
            printf("cinco");
            break;
        default:
            printf("fuera de rango");
    }
    return 0;
}

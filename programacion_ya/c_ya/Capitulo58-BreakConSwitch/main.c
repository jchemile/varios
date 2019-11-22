#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
    int valor;
    for(f = 0; f < 5; f++)
    {
        printf("Ingrese valor: ");
        scanf("%i", &valor);
        if(valor > 5 || valor <= 0)
        {
            continue;
        }
        switch(valor)
        {
            case 1:
                printf("Uno");
                break;
            case 2:
                printf("Dos");
                break;
            case 3:
                printf("Tres");
                break;
            case 4:
                printf("Cuatro");
                break;
            case 5:
                printf("Cinco");
                break;
        }
        printf("\n");

    }
    return 0;
}

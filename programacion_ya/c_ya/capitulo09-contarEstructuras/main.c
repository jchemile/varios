#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cantidad, n;
    float largo;
    x = 1;
    cantidad = 0;
    printf("Cuantas piezas procesara: ");
    scanf("%i", &n);
    while (x <= n)
    {
        printf("Ingrese la medidad del a pieza: ");
        scanf("%f", &largo);
        if(largo >= 1.20 && largo <= 1.30)
        {
            cantidad = cantidad + 1;
        }
        x = x +1;
    }
    printf("La cantidad de piezas aptas son: ");
    printf("%i", cantidad);
    return 0;
}

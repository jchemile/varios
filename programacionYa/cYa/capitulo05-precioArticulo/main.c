#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad;
    float precio, montoAPagar;

    printf("Precio ");
    scanf("%f", &precio);
    printf("cantidad ");
    scanf("%i", &cantidad);

    montoAPagar = precio * cantidad;

    printf("Monto total: ");
    printf("%f", montoAPagar);
    return 0;
}

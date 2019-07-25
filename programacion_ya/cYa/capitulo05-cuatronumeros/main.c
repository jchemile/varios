#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4;
    float suma, producto;

    printf("Ingrese numero ");
    scanf("%f", &num1);
    printf("\n");
    printf("Ingrese numero ");
    scanf("%f", &num2);
    printf("\n");
    printf("Ingrese numero ");
    scanf("%f", &num3);
    printf("\n");
    printf("Ingrese numero ");
    scanf("%f", &num4);
    printf("\n");

    suma = num1 + num2;
    producto = num3 * num4;

    printf("suma: ");
    printf("%f", suma);
    printf("\n");
    printf("producto: ");
    printf("%f", producto);
    printf("\n");
    return 0;
}

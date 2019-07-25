#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2;
    int may;
    printf("Ingrese primer valor: ");
    scanf("%i", &v1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &v2);
    may = (v1 > v2)? v1:v2;
    printf("El valor mayor es: %i", may);

    return 0;
}

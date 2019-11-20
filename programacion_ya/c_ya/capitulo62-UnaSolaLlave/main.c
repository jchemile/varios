#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2;
    printf("Primer valor: ");
    scanf("%i", &v1);
    printf("Segundo valor: ");
    scanf("%i", &v2);
    if(v1 > v2)
        printf("El valor mayor es %i", v1);
    else
        printf("El valor mayor es %i", v2);
    return 0;
}

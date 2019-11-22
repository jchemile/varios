#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vector1[4];
    int vector2[4];
    int vector3[4];

    for(i = 0; i < 4; i++)
    {
        printf("Ingrese indice %i del vector 1: ", i);
        scanf("%i", &vector1[i]);

        printf("Ingrese indice %i del vector 2: ", i);
        scanf("%i", &vector2[i]);

        vector3[i] = vector1[i] + vector2[i];
    }

    printf("**VECTOR 3**\n");
    for(i = 0; i < 4; i++)
    {
        printf("%i ", vector3[i]);
    }

    return 0;
}

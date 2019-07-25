#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo;
    archivo = fopen("archivo2.dat", "rb");

    if (archivo == NULL)
        exit(1);

    int entero1;
    fread(&entero1, sizeof(int),1,archivo);
    printf("Entero 1: %i\n",entero1);

    int entero2;
    fread(&entero2, sizeof(int),1,archivo);
    printf("Entero 2: %i\n", entero2);

    float float1;
    fread(&float1, sizeof(float),1,archivo);
    printf("Float 1: %0.2f\n", float1);

    float float2;
    fread(&float2, sizeof(float),1,archivo);
    printf("Float 2: %0.2f\n", float2);

    return 0;
}

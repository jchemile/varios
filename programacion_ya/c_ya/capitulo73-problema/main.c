#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo;
    archivo = fopen("archivo2.dat", "rb");

    if (archivo == NULL)
        exit(1);

    fseek(archivo,8,SEEK_SET);

    float float1;
    fread(&float1, sizeof(float),1, archivo);
    printf("Float 1: %0.3f\n", float1);

    float float2;
    fread(&float2, sizeof(float),1,archivo);
    printf("Float 2: %0.3f\n", float2);
    return 0;
}

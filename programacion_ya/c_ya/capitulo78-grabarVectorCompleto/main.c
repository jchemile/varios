#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void grabarVector()
{
    FILE *archivo;
    archivo = fopen("archivo7.dat", "wb");

   if(archivo == NULL)
        exit(1);

    int vec[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    fwrite(vec, sizeof(int), TAM, archivo);
    fclose(archivo);
}

void recuperarVector()
{
    FILE *archivo;
    archivo = fopen("archivo7.dat", "rb");

    if(archivo == NULL)
        exit(1);

    int vec[TAM];

    fread(vec, sizeof(int), TAM, archivo);

    int f;

    for(f = 0; f < TAM; f++)
    {
        printf("%i ", vec[f]);
    }
    fclose(archivo);
}

int main()
{
    grabarVector();
    recuperarVector();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void crear()
{
    FILE *archivo;
    archivo = fopen("archivo6.dat", "wb");
    if(archivo == NULL)
        exit(1);

    int valor1, valor2, valor3, posicion;

    valor1 = 10;
    valor2 = 20;
    valor3 = 30;

    fwrite(&valor1, sizeof(int), 1, archivo);
    posicion = ftell(archivo);
    printf("Posicion del puntero luego de grabar el archivo es %i\n", posicion);

    fwrite(&valor2, sizeof(int), 1, archivo);
    posicion = ftell(archivo);
    printf("Posicion del puntero luego de grabar el archivo es %i\n", posicion);

    fwrite(&valor3, sizeof(int), 1, archivo);
    posicion = ftell(archivo);
    printf("Posicion del puntero luego de grabar el archivo es %i\n", posicion);

    fclose(archivo);
}

int main()
{
    crear();
    printf("\n");
    FILE *archivo;
    archivo = fopen("archivo6.dat", "rb");

    if(archivo == NULL)
        exit(1);

    fseek(archivo, 0, SEEK_END);
    int posicion = ftell(archivo);

    printf("El tamaño del archivo \"archivo6.dat\" es de %i bytes", posicion);
    fclose(archivo);

    return 0;
}

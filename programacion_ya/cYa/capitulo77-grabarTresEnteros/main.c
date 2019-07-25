#include <stdio.h>
#include <stdlib.h>

void crear()
{
    FILE *archivo;
    archivo = fopen("archivo6.dat", "wb");

    if(archivo == NULL)
        exit(1);

    int valor1 = 10;
    fwrite(&valor1, sizeof(int),1,archivo);
    int posicion = ftell(archivo);
    printf("La posicion del puntero es: %i\n", posicion);

    int valor2 = 20;
    fwrite(&valor2, sizeof(int),1, archivo);
    posicion = ftell(archivo);
    printf("La posicion del puntero es: %i\n", posicion);

    int valor3 = 30;
    fwrite(&valor3, sizeof(int),1, archivo);
    posicion = ftell(archivo);
    printf("La posicion del puntero es: %i\n", posicion);

    fclose(archivo);
}

void imprimir()
{
    FILE *archivo;
    archivo = fopen("archivo6.dat", "rb");
    if(archivo == NULL)
        exit(1);

    printf("Todos los datos almacenados en el archivo. \n");
    int x, posicion;
    fread(&x, sizeof(int), 1, archivo);

    while(!feof(archivo))
    {
        posicion = ftell(archivo);
        printf("Dato leido %i y posicion del puntero de archivo %i\n",x, posicion);
        fread(&x, sizeof(int), 1, archivo);
    }
    fclose(archivo);
}


int main()
{
    crear();
    imprimir();
    return 0;
}

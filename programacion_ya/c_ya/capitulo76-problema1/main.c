#include <stdio.h>
#include <stdlib.h>

void cargarValor(int valor)
{
    FILE *archivo;
    archivo = fopen("archivoprueba.dat", "wb");
    int i = 1;

    if(archivo == NULL)
        exit(1);

    /*
    while(i <= valor)
    {
        fwrite(&i, sizeof(int),1,archivo);
        i++;
    }
    */


    fclose(archivo);
}

void imprimir()
{
    FILE *archivo;
    archivo = fopen("archivoprueba.dat", "rb");

    if(archivo == NULL)
        exit(1);

    printf("Los datos almacenados hasta el valor n son: \n");
    int x;
    fread(&x, sizeof(int),1, archivo);
    while(!feof(archivo))
    {
        printf("%i ", x);
        fread(&x, sizeof(int),1, archivo);
    }
    fclose(archivo);
}

int main()
{
    cargarValor(100);
    imprimir();

    return 0;
}

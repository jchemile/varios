#include <stdio.h>
#include <stdlib.h>




    void crear()
    {
        FILE *archivo;
        archivo = fopen("archivo4.dat", "wb");

        if (archivo == NULL)
            exit(1);

        int valor1 = 10;
        fwrite(&valor1, sizeof(int),1,archivo);

        int valor2 = 20;
        fwrite(&valor2, sizeof(int),1, archivo);

        int valor3 = 30;
        fwrite(&valor3, sizeof(int),1, archivo);

        fclose(archivo);
    }

    void modificar()
    {
        FILE *archivo;
        archivo = fopen("archivo4.dat", "r+b");

        if(archivo == NULL)
            exit(1);

        fseek(archivo, 4, SEEK_SET);
        int x = 100;
        fwrite(&x, sizeof(int), 1, archivo);

        fclose(archivo);
    }

    void imprimir()
    {
        FILE *archivo;
        archivo = fopen("archivo4.dat", "rb");

        if(archivo == NULL)
            exit(1);

        int valor1, valor2, valor3;
        fread(&valor1, sizeof(int), 1, archivo);
        printf("Valor 1: %i\n", valor1);

        fread(&valor2, sizeof(int), 1, archivo);
        printf("Valor 2: %i\n", valor2);

        fread(&valor3, sizeof(int), 1, archivo);
        printf("Valor 3: %i\n", valor3);

        fclose(archivo);

    }

int main()
{
    crear();
    imprimir();
    modificar();
    imprimir();

    return 0;
}

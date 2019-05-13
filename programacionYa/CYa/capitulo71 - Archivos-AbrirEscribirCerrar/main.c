#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se define un puntero de tipo FILE
    FILE *arch;

    //Una vez definida la variable. Llamamos a la funcion fopen("Nombre de archivo", tipo de apertura)
    arch = fopen("archivo1.dat", "wb");
    if(arch == NULL)
        exit(1);

    //Se guarda la letra
    char letra = 'A';
    fwrite(&letra, sizeof(char), 1, arch);
    //Se guarda un entero
    int valor1 = 12;
    fwrite(&valor1, sizeof(int), 1, arch);
    //se guarda un float
    float valor2 = 5.25;
    fwrite(&valor2, sizeof(float), 1, arch);

    //se cierra el archivo
    fclose(arch);

    printf("Se creo el archivo binario que almacena el char, int y float");


    return 0;
}

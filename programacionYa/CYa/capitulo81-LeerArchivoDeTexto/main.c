#include <stdio.h>
#include <stdlib.h>

void crearArchivoTexto()
{
    FILE *archivo;
    archivo = fopen("archivo1.txt", "wt");

    if(archivo == NULL)
        exit(1);

    fputs("Primera linea\n", archivo);
    fputs("Segunda linea\n", archivo);
    fputs("Tercera linea\n", archivo);

    printf("Archivo creado\n");

    fclose(archivo);
}


int main()
{
    crearArchivoTexto();

    printf("Leyendo: \n");

    FILE *archivo;
    archivo = fopen("archivo1.txt", "rt");

    if(archivo == NULL)
        exit(1);

    char caracter = fgetc(archivo);

    while(!feof(archivo))
    {
        printf("%c", caracter);
        caracter = fgetc(archivo);
    }
    fclose(archivo);

    return 0;
}

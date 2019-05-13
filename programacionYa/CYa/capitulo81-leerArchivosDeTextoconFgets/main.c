#include <stdio.h>
#include <stdlib.h>

void crearArchivoDeTexto()
{
    FILE *archivo;
    archivo = fopen("datos1.txt", "wt");

    if(archivo == NULL)
            exit(1);

    fputs("Primera linea\n", archivo);
    fputs("Segunda linea\n", archivo);
    fputs("Tercera linea\n", archivo);

    printf("Se agregaron las tres lineas al archivo\n");

    fclose(archivo);
}


int main()
{
    crearArchivoDeTexto();
    printf("Leyendo el contenido del archivo: \n");

    FILE *archivo;
    archivo = fopen("datos1.txt", "rt");

    if(archivo == NULL)
        exit(1);

    char linea[100];
    fgets(linea,100,archivo);

    while(!feof(archivo))
    {
        printf("%s", linea);
        fgets(linea, 100, archivo);
    }
    fclose(archivo);


    return 0;
}

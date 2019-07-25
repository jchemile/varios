#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("datos1.txt", "wt");

    if(archivo == NULL)
        exit(1);

    fputs("Primera linea\n", archivo);
    fputs("Segunda linea\n", archivo);
    fputs("Tercera linea\n", archivo);
    fclose(archivo);

    printf("Se creo el archivo con tres lineas de texto");
    getch();
    return 0;
}

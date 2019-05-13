#include <stdio.h>
#include <stdlib.h>

void crearArchivoDeTexto()
{
    FILE *archivo;
    archivo = fopen("textoparaejercicio.txt","wt");

    if(archivo == NULL)
        exit(1);

    fputs("esta es la primera linea\n", archivo);
    fputs("linea de prueba 2\n", archivo);
    fputs("Ejercicio 1 linea uno\n", archivo);

    printf("Se creo el archivo \n");

    fclose(archivo);
}

void contarVocales()
{
    FILE *archivo;
    archivo = fopen("textoparaejercicio.txt","rt");

    if (archivo == NULL)
        exit(1);

    int vocales = 0;
    char caracter = fgetc(archivo);

    while(!feof(archivo))
    {
        if(caracter == 'a' || caracter == 'A' ||
           caracter == 'e' || caracter == 'E' ||
           caracter == 'i' || caracter == 'I' ||
           caracter == 'o' || caracter == 'O' ||
           caracter == 'u' || caracter == 'U'){
            vocales++;
        }
        caracter = fgetc(archivo);
    }

    printf("El archivo posee %i vocales\n", vocales);

    fclose(archivo);
}

void contarLineas()
{
    FILE *archivo;
    archivo = fopen("textoparaejercicio.txt","rt");

    if(archivo == NULL)
        exit(1);

    char caracter = fgetc(archivo);
    int lineas = 0;

    while(!feof(archivo))
    {

        if(caracter == '\n')
            lineas++;
        caracter = fgetc(archivo);
    }

    fclose(archivo);

    printf("Cantidad de lineas: %i", lineas);
}

int main()
{
    crearArchivoDeTexto();
    contarVocales();
    contarLineas();
    return 0;
}

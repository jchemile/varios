#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero1, entero2;
    float float1, float2;
    FILE *archivo;


    printf("Ingrese el primer entero: ");
    scanf("%i", &entero1);

    printf("Ingrese el segundo entero: ");
    scanf("%i", &entero2);

    printf("Ingrese el primer float: ");
    scanf("%f", &float1);

    printf("Ingrese el segundo float: ");
    scanf("%f", &float2);

    archivo = fopen("archivo2.dat", "wb");

    if(archivo == NULL)
        exit(1);

    fwrite(&entero1, sizeof(int),1,archivo);
    fwrite(&entero2, sizeof(int),1,archivo);
    fwrite(&float1, sizeof(int),1,archivo);
    fwrite(&float2, sizeof(int),1,archivo);

    printf("Se creo el archivo binario");
    return 0;
}

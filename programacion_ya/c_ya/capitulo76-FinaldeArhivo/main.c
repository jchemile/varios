#include <stdio.h>
#include <stdlib.h>


void crearCargar()
{
    FILE *arch;
    arch = fopen("archivo4.dat", "wb");
    if(arch == NULL)
        exit(1);

    int valor;
    do{
        printf("Ingrese valor entero (0 para finalizar): ");
        scanf("%i", &valor);
        if(valor != 0)
            fwrite(&valor, sizeof(int), 1, arch);
    } while(valor != 0);
    fclose(arch);
}

void imprimir()
{
    FILE *arch;
    arch = fopen("archivo4.dat", "rb");
    if(arch == NULL)
        exit(1);
    printf("todos los datos almacenados en el archivo. \n");
    int x;
    fread(&x, sizeof(int), 1, arch);
    while(!feof(arch))
    {
        printf("%i ", x);
        fread(&x, sizeof(int),1,arch);
    }
    fclose(arch);
}

int main()
{
    crearCargar();
    imprimir();
    return 0;
}

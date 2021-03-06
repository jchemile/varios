#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    int descripcion[41];
    float precio;
} tproducto;

void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}

void crear()
{
    FILE *archivo;
    archivo = fopen("productos.dat", "wb");

    if(archivo == NULL)
        exit(1);
    fclose(archivo);
    continuar();
}

void cargar()
{
    FILE *archivo;
    archivo = fopen("productos.dat", "ab");
    if(archivo == NULL)
        exit(1);
    tproducto producto;

    printf("Ingrese el c�digo del producto: ");
    scanf("i%", &producto.codigo);
    fflush(stdin);

    printf("Ingrese el nombre del producto: ");
    gets(producto.descripcion);

    printf("Ingrese precio: ");
    scanf("%f", &producto.precio);

    fwrite(&producto, sizeof(tproducto), 1, archivo);
    fclose(archivo);
    continuar();
}

void listado()
{
    FILE *archivo;
    archivo = fopen("productos.dat", "rb");

    if(archivo == NULL)
        exit(1);

    tproducto producto;
    fread(&producto, sizeof(tproducto),1, archivo);

    while(!feof(archivo))
    {
        printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
        fread(&producto,sizeof(tproducto),1,archivo);
    }
    fclose(archivo);
    continuar();
}

void consulta(){
    FILE *archivo;
    archivo = fopen("productos.dat", "rb");

    if(archivo ==  NULL)
        exit(1);
    printf("Ingrese el codigo de producto a consultar: ");
    int cod;
    scanf("%i", cod);
    tproducto producto;
    int existe = 0;
    fread(&producto, sizeof(tproducto),1,archivo);
    while(!feof(archivo))
    {
        if(cod == producto.codigo)
        {
            printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
            existe = 1;
            break;
        }
        fread(&producto, sizeof(tproducto),1,archivo);
    }
    if(existe == 0)
        printf("No existe producto con dicho codigo\n");
    fclose(archivo);
    continuar();
}

void modificacion(){
    FILE *archivo;
    archivo = fopen("productos.dat", "r+b");

    if(archivo == NULL)
        exit(1);

    printf("Ingrese el codigo de producto a modificar: ");
    int cod;
    scanf("%i", &cod);
    tproducto producto;
    int existe = 0;
    fread(&producto, sizeof(tproducto), 1, archivo);
    while(!feof(archivo))
    {
        if(cod == producto.codigo)
        {
            printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
            printf("Ingrese el precio: ");
            scanf("%f", &producto.precio);
            int posicion = ftell(archivo)  - sizeof(producto);
            fseek(archivo,posicion,SEEK_SET);
            fwrite(&producto, sizeof(tproducto),1,archivo);
            printf("Se modifico el precio para dicho producto.\n");
            existe = 1;
            break;
        }
        fread(&producto, sizeof(tproducto),1, archivo);
    }
    if (existe == 0)
        printf("No existe un producto con dicho codigo\n");
    fclose(archivo);
    continuar();
}



int main()
{
    int opcion;
    do
    {
        printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
        printf("2 - Carga de registros tipo tproducto\n");
        printf("3 - Listado completo de productos. \n");
        printf("4 - Consulta de producto por su codigo. \n");
        printf("5 - Modificacion del precio de un procuto. \n");
        printf("6 - Finalizar\n\n");
        printf("Ingrese su opcion: ");
        scanf("%i", &opcion);

        switch(opcion){
            case 1: crear();
                break;
            case 2: cargar();
                break;
            case 3: listado();
                break;
            case 4: consulta();
                break;
            case 5: modificacion();
                break;
        }
    } while(opcion != 6);

    return 0;
}

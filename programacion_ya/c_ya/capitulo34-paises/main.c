#include <stdio.h>
#include <stdlib.h>

struct pais{
    char nombre[40];
    int cantidadHab;
};

void cargarDatoPais(struct pais *ppais)
{
    printf("Nombre: ");
    gets(ppais ->nombre);
    printf("Habitantes: ");
    scanf("%i", &ppais ->cantidadHab);
    fflush(stdin);
}

void imprimirDatos(struct pais pais)
{
    printf("\nNombre: %s - ", pais.nombre);
    printf("Habitantes: %i", pais.cantidadHab);
}



int main()
{
    struct pais pais1;
    struct pais pais2;
    struct pais pais3;

    cargarDatoPais(&pais1);
    cargarDatoPais(&pais2);
    cargarDatoPais(&pais3);

    imprimirDatos(pais1);
    imprimirDatos(pais2);
    imprimirDatos(pais3);
    return 0;
}

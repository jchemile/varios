#include <stdio.h>
#include <stdlib.h>

#define TAMANO 3

struct fecha{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};

void cargar(struct producto vec[TAMANO])
{
    int f;
    for(f=0; f < TAMANO; f++)
    {
        printf("Codigo: ");
        scanf("%i", &vec[f].codigo);
        fflush(stdin);
        printf("Descripcion:");
        gets(vec[f].descripcion);
        printf("Precio:");
        scanf("%f", &vec[f].precio);
        printf("Fecha de vencimiento\n");
        printf("Dia: ");
        scanf("%i", &vec[f].fechavencimiento.dd);
        printf("Mes: ");
        scanf("%i", &vec[f].fechavencimiento.mm);
        printf("Ano: ");
        scanf("%i", &vec[f].fechavencimiento.aa);
    }
}

void imprimir(struct producto vec[TAMANO])
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("%i %s %0.2f\n", vec[f].codigo, vec[f].descripcion, vec[f].precio);
        printf("Fecha: %i/%i/%i\n", vec[f].fechavencimiento.dd,vec[f].fechavencimiento.mm, vec[f].fechavencimiento.aa);
    }
}

int main()
{
    struct producto vec[TAMANO];
    cargar(vec);
    imprimir(vec);
    return 0;
}

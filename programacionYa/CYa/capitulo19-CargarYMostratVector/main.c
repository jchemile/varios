#include <stdio.h>
#include <stdlib.h>

void cargar(int vec[5])
{
    int x;
    for(x = 0; x < 5; x++)
    {
        printf("Ingrese elementos:");
        scanf("%i", &vec[x]);
    }
}

void imprimir(int vec[5])
{
    int x;
    printf("Contenido completo del vector: \n");
    for(x=0; x < 5; x++)
    {
        printf("%i\n", vec[x]);
    }
}


int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    return 0;
}

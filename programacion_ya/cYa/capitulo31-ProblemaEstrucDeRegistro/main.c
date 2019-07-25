#include <stdio.h>
#include <stdlib.h>

#define TAMANO 1

struct punto{
    int x;
    int y;
};

struct triangulo{
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

void cargar(struct triangulo vec[TAMANO])
{
    int f;
    for(f=0; f < TAMANO; f++)
    {
       printf("Punto 1\n");
       printf("Coordenada X: ");
       scanf("%i", &vec[f].punto1.x);
       printf("Coordenada Y: ");
       scanf("%i", &vec[f].punto1.y);

       printf("Punto 2\n");
       printf("Coordenada X: ");
       scanf("%i", &vec[f].punto2.x);
       printf("Coordenada Y: ");
       scanf("%i", &vec[f].punto2.y);

       printf("Punto 3\n");
       printf("Coordenada X: ");
       scanf("%i", &vec[f].punto3.x);
       printf("Coordenada Y: ");
       scanf("%i", &vec[f].punto3.y);
    }
}

void imprimir(struct triangulo vec[TAMANO])
{
    int f;
    for(f = 0; f < TAMANO; f++)
    {
        printf("PUNTO 1\n");
        printf("X = %i - Y = %i\n", vec[f].punto1.x, vec[f].punto1.y);
        printf("PUNTO 2\n");
        printf("X = %i - Y = %i\n", vec[f].punto2.x, vec[f].punto2.y);
        printf("PUNTO 3\n");
        printf("X = %i - Y = %i\n", vec[f].punto3.x, vec[f].punto3.y);
    }
}

int main()
{
    struct triangulo prueba[TAMANO];
    cargar(prueba);
    imprimir(prueba);
    return 0;
}

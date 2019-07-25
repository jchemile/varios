#include<stdio.h>
#include"pila.h"

tnodo raiz = NULL;

int main()
{
    insertar(10);
    insertar(40);
    insertar(3);
    imprimir();
    printf("Extraemos de la pila: %i\n", extraer());
    imprimir();
    liberar();
}

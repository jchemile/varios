#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    valor1 = 10;
    valor2 = 20;

    int *pe;

    pe = &valor1;

    printf("Lo apuntado por pe es: %i\n", *pe);
    printf("La direccion de memoria que almacena pe es :%p\n",pe);

    pe = &valor2;

    printf("Lo apuntado por pe es: %i\n", *pe);
    printf("La direccion de memoria que almacena pe es :%p\n",pe);
    return 0;
}

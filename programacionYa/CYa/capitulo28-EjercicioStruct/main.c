#include <stdio.h>
#include <stdlib.h>

struct pais{
    char nombre[40];
    int cantidadhab;
};

void imprimir(struct pais p)
{
    printf("Pais: %s - Habitantes: %i\n", p.nombre, p.cantidadhab);
}

int main()
{
    struct pais pais1 = {"Argentina", 4000};
    imprimir(pais1);
    struct pais pais2 = {"Brasil", 8000};
    imprimir(pais2);
    struct pais pais3 = {"Chile", 10000};
    imprimir(pais3);
    return 0;
}

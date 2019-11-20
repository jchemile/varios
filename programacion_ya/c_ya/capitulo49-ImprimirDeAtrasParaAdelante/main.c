#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void insertarPrimero(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> sig = raiz;
    raiz = nuevo;
}

void imprimir(struct nodo *reco)
{
    if(reco != NULL)
    {
        imprimir(reco -> sig);
        printf("%i ", reco -> info);
    }
}

void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while(reco != NULL)
    {
        bor = reco;
        reco = reco -> sig;
        free(bor);
    }
}

int main()
{
    insertarPrimero(10);
    insertarPrimero(4);
    insertarPrimero(5);
    printf("Impresion de la lista del final al principio\n");
    imprimir(raiz);
    liberar();
    return 0;
}

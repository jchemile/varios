#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;

    if(raiz == NULL)
    {
        raiz = nuevo;
        nuevo -> sig = NULL;
    }
    else
    {
        nuevo -> sig = raiz;
        raiz = nuevo;
    }
}


void imprimir()
{
    struct nodo *reco = raiz;
    printf("Lista Completa: ");
    while(reco != NULL)
    {
        printf("%i ", reco -> info);
        reco = reco -> sig;
    }
    printf("\n");
}

int extraer()
{
    if(raiz != NULL)
    {
        int informacion = raiz -> info;
        struct nodo *bor = raiz;
        raiz = raiz ->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

int cantidad()
{
    struct nodo *reco =raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco -> sig;
    }
    return cant;
}

int retornaPrimero()
{
    if(raiz != NULL)
    {
        return raiz -> info;
    }
    else
    {
        return -1;
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

int vacia()
{
    if (raiz == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    insertar(10);
    insertar(20);
    insertar(30);
    insertar(40);
    insertar(50);
    printf("Cantidad %i\n", cantidad());
    printf("%i",retornaPrimero());
    imprimir();
    extraer();
    printf("Cantidad %i\n", cantidad());
    imprimir();
    printf("%i",retornaPrimero());
    return 0;
}

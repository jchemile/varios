#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int info;
    struct nodo* sig;
};

struct nodo *raiz = NULL;

void liberar()
{
    struct nodo *reco = NULL;
    struct nodo *bor;
    while(reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int vacia()
{
    if(raiz == NULL)
        return 1;
    else
        return 0;
}

void imprimir()
{
    struct nodo *reco=raiz;
    printf("Lista Completa.\n");
    while(reco != NULL)
    {
        printf("%i ", reco-> info);
        reco = reco -> sig;
    }
    printf("\n");
}

void insertar(int x)
{
    struct nodo* nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> sig = NULL;
    if(raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        if (x<raiz->info)
        {
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
        {
            struct nodo *reco = raiz;
            struct nodo *atras = raiz;
            while(x >= reco -> info && reco -> sig != NULL)
            {
                atras = reco;
                reco = reco -> sig;
            }
            if(x >= reco -> info)
            {
                reco -> sig = nuevo;
            }
            else
            {
                nuevo -> sig = reco;
                atras -> sig = nuevo;
            }
        }
    }
}

int main()
{
    insertar(10);
    insertar(0);
    insertar(1);
    insertar(8);
    insertar(2);
    imprimir();
    liberar();
    return 0;
}

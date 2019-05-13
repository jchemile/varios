#include<stdio.h>
#include<stdlib.h>
#include"pila.h"

extern tnodo raiz;

void insertar(int x)
{
    tnodo nuevo;
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
    tnodo reco = raiz;
    printf("Lista copleta.\n");
    while(reco != NULL)
    {
        printf("%i ", reco -> info);
        reco = reco -> sig;
    }
    printf("\n");
}

int extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz -> info;
        struct nodo *bor = raiz;
        raiz = raiz -> sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }

}

void liberar()
{
    tnodo reco = raiz;
    tnodo bor;
    while(reco != NULL)
    {
        bor = reco;
        reco = reco -> sig;
        free(bor);
    }
}

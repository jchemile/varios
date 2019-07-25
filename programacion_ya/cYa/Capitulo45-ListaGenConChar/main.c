#include <stdio.h>
#include <stdlib.h>

struct nodo{
    char usuario[51];
    struct nodo *sig;
};

struct nodo *raiz = NULL;

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
    if(raiz == NULL)
        return 1;
    else
        return 0;
}

void imprimir()
{
    struct nodo *reco = raiz;
    printf("Lista completa.\n");
    while(reco != NULL)
    {
        printf("%s ", reco-> usuario);
        reco = reco -> sig;
    }
    printf("\n");
}

void insertar(char *x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    strcpy(nuevo -> usuario, x);
    nuevo -> sig = NULL;
    if(raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        if(strcmp(x, raiz -> usuario) < 0)
        {
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
        {
            struct nodo *reco = raiz;
            struct nodo *atras = raiz;
            while(strcmp(x, reco -> usuario) > 0 && reco -> sig != NULL)
            {
                atras = reco;
                reco = reco -> sig;
            }
            if(strcmp(x, reco -> usuario)> 0)
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
    insertar("wenseslao");
    insertar("ana");
    insertar("conejo");
    insertar("zaira");
    insertar("gaston");
    insertar("juan");
    imprimir();
    liberar();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
    int info;
    struct nodo* sig;
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

int cantidad()
{
    struct nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = raiz -> sig;
    }
    return cant;
}

void imprimir()
{
    struct nodo *reco = raiz;
    printf("Lista. \n");
    while(reco != NULL)
    {
        printf(" %i ", reco -> info);
        reco = reco -> sig;
    }
    printf("\n");
}


void insertarPrimero(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> sig = raiz;
    raiz = nuevo;
}

void insertarUltimo(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> sig = NULL;
    if(raiz == NULL)
        raiz = nuevo;
    else
    {
        struct nodo *reco = raiz;
        while (reco->sig != NULL)
        {
            reco = reco -> sig;
        }
        reco -> sig = nuevo;
    }
}

void insertarSegundo(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    if(raiz -> sig == NULL)
    {
        raiz -> sig = nuevo;
    }
    else
    {
        nuevo -> sig = raiz -> sig;
        raiz -> sig = nuevo;
    }
}

void insertarAnteultimo(int x)
{
    if(raiz != NULL)
    {
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo ->info = x;
        if(raiz -> sig == NULL)
        {
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
        {
            struct nodo *atras = raiz;
            struct nodo *reco = raiz -> sig;
            while(reco -> sig != NULL)
            {
                atras = reco;
                reco = reco -> sig;
            }
            nuevo -> sig = atras -> sig;
            atras -> sig = nuevo;
        }
    }
}

void borrarPrimero()
{
    if (raiz != NULL)
    {
        struct nodo *bor = raiz;
        raiz = raiz -> sig;
        free(bor);
    }
}

void borrarSegundo()
{
    if(raiz != NULL)
    {
        if(raiz -> sig != NULL)
        {
            struct nodo *bor = raiz -> sig;
            struct nodo *tercero = raiz -> sig;
            tercero = tercero -> sig;
            raiz -> sig = tercero;
            free(bor);
        }
    }
}

void borrarUltimo()
{
    if(raiz != NULL)
    {
        if(raiz -> sig == NULL)
        {
            free(raiz);
            raiz = NULL;
        }
        else
        {
            struct nodo *reco = raiz -> sig;
            struct nodo *atras = reco;
            while(reco -> sig != NULL)
            {
                atras = reco;
                reco = reco ->sig;
            }
            atras -> sig = NULL;
            free(reco);
        }
    }
}

void borrarMayor()
{
    if(raiz != NULL)
    {
        struct nodo *reco = raiz;
        int may = raiz -> info;
        while(reco != NULL)
        {
            if(reco -> info > may)
            {
                may = reco -> info;
            }
            reco = reco -> sig;
        }
        reco = raiz;
        struct nodo *atras = raiz;
        struct nodo *bor;
        while(reco != NULL)
        {
            if(reco -> info == may)
            {
                if(reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz ->sig;
                    atras = raiz;
                    reco = raiz;
                    free(bor);
                }
                else
                {
                    atras -> sig = reco -> sig;
                    bor = reco;
                    reco = reco -> sig;
                    free(bor);
                }
            }
            else
            {
                atras = reco;
                reco = reco -> sig;
            }
        }
    }
}

int main()
{
    insertarPrimero(10);
    insertarPrimero(45);
    insertarPrimero(23);
    insertarPrimero(89);
    imprimir();
    printf("Insertamos al final\n");
    insertarUltimo(160);
    imprimir();
    printf("Insertamos en la segunda posicion\n");
    insertarSegundo(13);
    imprimir();
    printf("Insertamos en la anteultima posicion\n");
    insertarAnteultimo(600);
    imprimir();
    printf("Borramos el primero\n");
    borrarPrimero();
    imprimir();
    printf("Borramos el segundo\n");
    borrarSegundo();
    imprimir();
    printf("Borramos el ultimo\n");
    borrarUltimo();
    imprimir();
    printf("Borramos mayor\n");
    borrarMayor();
    imprimir();
    liberar();


    return 0;
}

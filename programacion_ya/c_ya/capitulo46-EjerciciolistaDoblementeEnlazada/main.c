#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
    struct nodo *ant;
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
    while(reco != NULL)
    {
        cant++;
        reco = reco -> sig;
    }
    return cant;
}

void imprimir()
{
    struct nodo *reco = raiz;
    printf("Lista completa.\n");
    while(reco != NULL)
    {
        printf("%i ", reco -> info);
        reco = reco -> sig;
    }
    printf("\n");
}

void insertarPrimero(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> ant = NULL;
    nuevo -> sig = raiz;
    if(raiz != NULL)
        raiz -> ant = nuevo;
    raiz = nuevo;
}

void insertarUltimo(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> ant = NULL;
    nuevo -> sig = NULL;
    if(raiz == NULL)
        raiz = nuevo;
    else
    {
        struct nodo *reco = raiz;
        while(reco -> sig != NULL)
        {
            reco = reco -> sig;
        }
        reco -> sig = nuevo;
        nuevo -> ant = reco;
    }
}

void insertarSegundo(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo -> info = x;
    nuevo -> ant = NULL;
    nuevo -> sig = NULL;
    if(raiz -> sig == NULL)
    {
        raiz -> sig = nuevo;
        nuevo -> ant = raiz;
    }
    else
    {
        struct nodo *segundo = raiz -> sig;
        nuevo -> sig = segundo;
        nuevo -> ant = raiz;
        raiz -> sig = nuevo;
        segundo -> ant = nuevo;
    }
}

void insertarAnteultimo(int x)
{
    if(raiz != NULL)
    {
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo -> info = x;
        nuevo -> ant = NULL;
        nuevo -> sig = NULL;
        if(raiz -> sig == NULL)
        {
            nuevo -> sig = raiz;
            raiz -> ant = nuevo;
            nuevo -> ant = NULL;
            raiz = nuevo;
        }
        else
        {
            struct nodo *reco = raiz;
            while(reco-> sig != NULL)
            {
                reco = reco -> sig;
            }
            struct nodo *anteultimo = reco -> ant;
            anteultimo -> sig = nuevo;
            nuevo -> ant = anteultimo;
            nuevo -> sig = reco;
            reco -> ant = nuevo;
        }
    }
}

void borrarPrimero()
{
    if(raiz != NULL)
    {
        struct nodo *bor = raiz;
        raiz = raiz -> sig;
        if(raiz != NULL)
            raiz -> ant = NULL;
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
            if(tercero != NULL)
                tercero -> ant = raiz;
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
            struct nodo *reco = raiz;
            while(reco-> sig != NULL)
            {
                reco = reco-> sig;
            }
            struct nodo *ante = reco -> ant;
            ante -> sig = NULL;
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
        struct nodo *bor;
        while(reco != NULL)
        {
            if(reco->info == may)
            {
                if(reco == raiz)
                {
                    bor = raiz;
                    raiz = raiz -> sig;
                    if(raiz != NULL)
                        raiz -> ant = NULL;
                    free(bor);
                    return;
                }
                else
                {
                    if(reco -> sig == NULL)
                    {
                        bor = reco;
                        reco = reco -> ant;
                        reco -> sig = NULL;
                        free(bor);
                        return;
                    }
                    else
                    {
                        struct nodo *ante = reco -> ant;
                        bor = reco;
                        reco = reco -> sig;
                        ante -> sig = reco;
                        reco -> ant = ante;
                        free(bor);
                        return;
                    }
                }
            }
            else
                reco = reco -> sig;
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
    printf("Insertarmos un nodo al final:\n");
    insertarUltimo(160);
    imprimir();
    printf("Insertamos un nodo en la segunda posición:\n");
    insertarSegundo(13);
    imprimir();
    printf("Insertamos un nodo en la anteultima posicion:\n");
    insertarAnteultimo(600);
    imprimir();
    printf("Borramos el primer nodo de la lista:\n");
    borrarPrimero();
    imprimir();
    printf("Borramos el segundo nodo de la lista:\n");
    borrarSegundo();
    imprimir();
    printf("Borramos el ultimo nodo de la lista:\n");
    borrarUltimo();
    imprimir();
    printf("Borramos el mayor de la lista:\n");
    borrarMayor();
    imprimir();

    return 0;
}

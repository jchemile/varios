#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo *sig;
};

struct nodo *raiz = NULL;

void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL)
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


void insertar(int pos, int x)
{
    if (pos <= cantidad() + 1)
    {
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo -> info = x;
        if(pos == 1)
        {
            nuevo -> sig = raiz;
            raiz = nuevo;
        }
        else
            if(pos == cantidad() + 1)
            {
                struct nodo *reco = raiz;
                while(reco -> sig != NULL)
                {
                    reco = reco -> sig;
                }
                reco -> sig = nuevo;
                nuevo -> sig = NULL;
            }
            else
            {
                struct nodo *reco = raiz;
                int f;
                for(f = 1; f <= pos -2; f++)
                {
                    reco = reco -> sig;
                }
                struct nodo *siguiente = reco -> sig;
                reco -> sig = nuevo;
                nuevo -> sig = siguiente;
            }

    }
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

int extraer(int pos)
{
    if(pos <= cantidad())
    {
        int informacion;
        struct nodo *bor;
        if(pos == 1)
        {
            informacion = raiz -> info;
            bor = raiz;
            raiz = raiz -> sig;
        }
        else
        {
            struct nodo *reco;
            reco =raiz;
            int f;
            for (f = 1; f <= pos -2; f++)
            {
                reco = reco -> sig;
            }
            struct nodo *prox = reco -> sig;
            reco -> sig = prox -> sig;
            informacion = prox -> info;
            bor = prox;
        }
        free(bor);
        return informacion;
    }
    else
        return -1;
}

void borrar(int pos)
{
    if(pos <= cantidad())
    {
        struct nodo *bor;
        if(pos == 1)
        {
            bor = raiz;
            raiz = raiz -> sig;
        }
        else
        {
            struct nodo *reco;
            reco = raiz;
            int f;
            for (f = 1; f <= pos -2; f++)
            {
                reco = reco -> sig;
            }
            struct nodo *prox = reco -> sig;
            reco -> sig = prox -> sig;
            bor = prox;
        }
        free(bor);
    }
}

void intercambiar(int pos1, int pos2)
{
    if(pos1 <= cantidad() && pos2 <= cantidad())
    {
        struct nodo *reco1 = raiz;
        int f;
        for(f = 1; f < pos1; f++)
        {
            reco1 = reco1 -> sig;
        }
        struct nodo *reco2 = raiz;
        for(f = 1; f < pos2; f++)
        {
            reco2 = reco2 -> sig;
        }
        int aux = reco1 -> info;
        reco1 -> info = reco2 -> info;
        reco2 -> info = aux;
    }
}

int mayor()
{
    if (!vacia())
    {
        int may = raiz -> info;
        struct nodo *reco = raiz -> sig;
        while( reco != NULL)
        {
            if(reco -> info >may)
            {
                may = reco -> info;
            }
            reco = reco -> info;
        }
        return may;
    }
    else
        return -1;
}

int posMayor()
{
    if(!vacia())
    {
        int may = raiz -> info;
        int x = 1;
        int pos = x;
        struct nodo *reco = raiz -> sig;
        while (reco != NULL)
        {
            if(reco -> info > may)
            {
                may = reco -> info;
                pos = x;
            }
            reco = reco -> sig;
            x++;
        }
        return pos;
    }
    else
        return -1;
}

int ordenada()
{
    if (cantidad () > 1)
    {
        struct nodo *reco1 = raiz;
        struct nodo *reco2 = raiz -> sig;
        while(reco2 != NULL)
        {
            if(reco2 -> info < reco1 ->info)
            {
                return 0;
            }
            reco2 = reco2 -> sig;
            reco1 = reco1 -> sig;
        }
    }
    return 1;
}

int existe(int x)
{
    struct nodo *reco = raiz;
    while (reco != NULL)
    {
        if(reco->info == x)
            return 1;
        reco = reco -> sig;
    }
    return 0;
}

int main()
{
    insertar(1, 10);
    insertar(2, 20);
    insertar(3, 30);
    insertar(4, 40);
    insertar(5, 50);
    imprimir();

    //borrar(3);
    //intercambiar(1,3);
    //imprimir();

    if(existe(90))
        printf("Existe");





    return 0;
}

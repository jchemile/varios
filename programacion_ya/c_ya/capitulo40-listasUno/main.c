#include <stdio.h>
#include <stdlib.h>

    struct nodo
    {
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
        printf("Lista completa.\n");
        while(reco!=NULL)
        {
            printf("%i ", reco ->info);
            reco = reco -> sig;
        }
        printf("\n");
    }

    int extraer()
    {

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
        if(raiz != NULL)
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
int main()
{
    insertar(10);
    insertar(20);
    insertar(30);
    imprimir();
    extraer();
    imprimir();
    return 0;
}

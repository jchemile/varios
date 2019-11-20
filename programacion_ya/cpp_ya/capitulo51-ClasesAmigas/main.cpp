#include <iostream>

using namespace std;

class Nodo{
    int info;
    Nodo *ant, *sig;
public:
    Nodo(int x){info = x;}
    friend class ListaGenerica;
};

class ListaGenerica{
    Nodo *raiz;
public:
    ListaGenerica(){raiz = NULL;};
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenerica::~ListaGenerica()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while(reco != NULL)
    {
        bor = reco;
        reco = reco -> sig;
        delete bor;
    }
}

void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo(x);
    nuevo -> ant = NULL;
    if(raiz == NULL)
    {
        nuevo -> sig = NULL;
        raiz = nuevo;
    }
    else
    {
        nuevo -> sig = raiz;
        raiz -> ant = raiz;
        raiz = nuevo;
    }
}

void ListaGenerica::imprimir()
{
    Nodo *reco =raiz;
    while(reco != NULL)
    {
        cout << reco -> info << " - ";
        reco = reco -> sig;
    }
    cout << endl;
}

int main()
{
    ListaGenerica *lista1 = new ListaGenerica();
    lista1 -> insertarPrimero(10);
    lista1 -> insertarPrimero(20);
    lista1 -> insertarPrimero(5);
    lista1 -> imprimir();
    return 0;
}

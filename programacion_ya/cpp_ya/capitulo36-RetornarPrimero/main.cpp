#include <iostream>

using namespace std;

class Pila{
private:
    class Nodo{
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    void imprimir();
    int cantidad();
    bool vacia();
    int retornarPrimero();
};

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
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

void Pila::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo de todos los elementos" << endl;
    while(reco != NULL)
    {
        cout << reco -> info << " - ";
        reco = reco -> sig;
    }
    cout << endl;
}

int Pila::extraer()
{
    if(raiz != NULL)
    {
        int informacion = raiz -> info;
        Nodo *bor = raiz;
        raiz = raiz -> sig;
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}

int Pila::retornarPrimero()
{
    int informacion;
    if(raiz != NULL)
        informacion = raiz -> info;
    else
        informacion = -1;

    return informacion;
}


Pila::~Pila()
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

int Pila::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

bool Pila::vacia()
{
    if(raiz == NULL)
        return true;
    else
        return false;
}

int main()
{
    Pila *pila1;
    pila1 = new Pila();
    pila1 -> insertar(10);
    pila1 -> insertar(30);
    pila1 -> insertar(50);
    cout << "El primero es: " << pila1 -> retornarPrimero() << endl;
    cout << "La cantidad de nodos es: " << pila1->cantidad() << endl;

    while (pila1 -> vacia() == false)
    {
        cout << "Extraemos de la pila: " << pila1 -> extraer() << endl;
    }
    delete pila1;
    return 0;
}

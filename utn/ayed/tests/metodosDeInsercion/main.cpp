#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sig;
};

//Insertar al inicio
void InsertarAlInicio(Nodo *& lista, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sig = lista;
    lista = nuevo;
}

//Insertar al final
void InsertarAlFinal(Nodo *& lista, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sig = NULL;
    if(lista == NULL)
    {
        lista = nuevo;
    }
    else
    {
        Nodo * aux = lista;
        while(aux -> sig != NULL)
        {
            aux = aux -> sig;
        }
        aux -> sig = nuevo;
    }
}

//Insertar ordenado
void insertarOrdendo(Nodo *& lista, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sig = NULL;

    Nodo *ant = NULL;
    Nodo *aux = lista;
    while(aux != NULL && aux -> info < valor)
    {
        ant = aux;
        aux = aux -> sig;
    }
    if(ant == NULL)
    {
        lista = nuevo;
    }
    else
    {
        ant -> sig = nuevo;
    }
    nuevo -> sig = aux;
}

void imprimir(Nodo *lista)
{
    Nodo * aux = lista;
    while(aux != NULL)
    {
        cout << aux -> info << endl;
        aux = aux -> sig;
    }
}

int main()
{
    Nodo *lista = NULL;
    insertarOrdendo(lista, 4);
    insertarOrdendo(lista, 5);
    insertarOrdendo(lista, 1);
    insertarOrdendo(lista, 3);
    insertarOrdendo(lista, 0);
    insertarOrdendo(lista, -8);
    imprimir(lista);


    return 0;
}

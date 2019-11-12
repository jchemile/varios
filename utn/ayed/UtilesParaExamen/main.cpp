#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo* sig;
};

void insertarAlInicio(Nodo *&lista, int v)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = v;
    nuevo ->sig = lista;
    lista = nuevo;
}

void insertarAlFinal(Nodo *&lista, int v)
{
    Nodo *nuevo new Nodo();
    nuevo -> info = v;
}

void mostrar(Nodo *lista)
{
    Nodo *aux = lista;
    while(aux != NULL)
    {
        cout << aux -> info << endl;
        aux = aux -> sig;
    }
    return;
}

int main()
{
    Nodo *listaPrueba = NULL;
    insertarAlInicio(listaPrueba, 8);
    insertarAlInicio(listaPrueba, 7);
    insertarAlInicio(listaPrueba, 6);
    insertarAlInicio(listaPrueba, 5);
    insertarAlInicio(listaPrueba, 4);
    insertarAlInicio(listaPrueba, 3);
    insertarAlInicio(listaPrueba, 2);
    insertarAlInicio(listaPrueba, 1);
    mostrar(listaPrueba);

    return 0;
}

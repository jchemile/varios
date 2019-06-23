#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sig;
};

void agregarAlFinal(Nodo*& lista, int valor)
{
    Nodo* nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sig = NULL;
    if(lista == NULL)
    {
        lista = nuevo;
    }
    else
    {
        Nodo* aux = lista;
        while( aux-> sig != NULL)
        {
            aux = aux -> sig;
        }
        aux -> sig = nuevo;
    }
    return;
}

void mostrar(Nodo *lista)
{
    Nodo *aux = lista;
    while (aux != NULL)
    {
        cout << aux -> info << endl;
        aux = aux -> sig;
    }
}

int main()
{
    Nodo* lista = NULL;
    agregarAlFinal(lista, 1);
    agregarAlFinal(lista, 2);
    agregarAlFinal(lista, 3);
    agregarAlFinal(lista, 4);
    mostrar(lista);
    return 0;
}

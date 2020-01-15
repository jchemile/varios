#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sig;
};

void push(Nodo*& pila, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = valor;
    nuevo->sig = pila;
    pila = nuevo;
}

void pop(Nodo*& pila)
{
    Nodo* sig;
    while(pila != NULL)
    {
        cout << pila -> info << endl;
        sig = pila ->sig;
        delete pila;
        pila = sig;
    }
    cout << "-------VACIADA CORRECTAMENTE-------" << endl;
}

void mostrar(Nodo* lista)
{
    Nodo* aux = lista;
    if(lista)
    {
        while(aux != NULL)
        {
            cout << aux -> info << endl;
            aux = aux->sig;
        }
    }
    else
    {
        cout << "PILA VACIA" << endl;
    }
}

int main()
{
    Nodo* pila = NULL;
    push(pila, 1);
    push(pila, 2);
    push(pila, 3);
    push(pila, 4);
    push(pila, 5);
    push(pila, 6);
    push(pila, 7);
    cout << "MOSTRAR" << endl;
    mostrar(pila);
    cout << "POP" << endl;
    pop(pila);
    cout << "MOSTRAR" << endl;
    mostrar(pila);


    return 0;
}

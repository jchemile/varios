#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sig;
};

void enqueue(Nodo*& cola, int valor)
{
    Nodo *nuevo = new Nodo();
    nuevo -> info = valor;
    nuevo -> sig = NULL;
    if(cola == NULL)
    {
        cola = nuevo;
    }
    else
    {
        Nodo* aux = cola;
        while(aux -> sig != NULL)
        {
            aux = aux -> sig;
        }
        aux -> sig = nuevo;
    }
    return;
}

void dequeue(Nodo*& cola)
{
    //Nodo* sig;
    while(cola != NULL)
    {
        cout << cola ->info << endl;
        delete cola;
        cola = cola -> sig;
    }
    cout << "-------VACIADA CORRECTAMENTE-------" << endl;
}

void mostrar(Nodo* cola)
{
    Nodo* aux = cola;
    if(cola)
    {
        while(aux != NULL)
        {
            cout << aux -> info << endl;
            aux = aux -> sig;
        }
    }
    else
    {
        cout << "COLA VACIA" << endl;
    }

}

int main()
{
    Nodo* cola = NULL;
    enqueue(cola, 1);
    enqueue(cola, 2);
    enqueue(cola, 3);
    enqueue(cola, 4);
    enqueue(cola, 5);
    enqueue(cola, 6);
    enqueue(cola, 7);
    enqueue(cola, 8);
    cout << "MOSTRAR" << endl;
    mostrar(cola);
    cout << "QUITAR DE LA COLA" << endl;
    dequeue(cola);
    cout << "MOSTRAR" << endl;
    mostrar(cola);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int sumaLista1, sumaLista2;
    int valor, cantidad;

    sumaLista1 = 0;
    sumaLista2 = 0;
    cantidad = 1;

    while(cantidad <= 5)
    {
        cout << "Ingrese valor " << cantidad <<" para la lista 1: ";
        cin >> valor;
        sumaLista1 += valor;
        cantidad++;
    }

    cantidad = 1;
    while(cantidad <= 5)
    {
        cout << "Ingrese valor " << cantidad <<" para la lista 2: ";
        cin >> valor;
        sumaLista2 += valor;
        cantidad++;
    }

    if(sumaLista1 == sumaLista2)
        cout << "Tienen los mismos valores";
    else
        if(sumaLista1 > sumaLista2)
            cout << "Lista 1 es mayor";
        else
            cout << "Lista 2 es mayor";
    return 0;
}

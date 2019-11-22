#include <iostream>

using namespace std;

int main()
{
    int cantidadACargar, cargados, valor, pares, impares;
    pares = 0;
    impares = 0;
    cargados = 0;

    cout << "Valor es a cargar: ";
    cin >> cantidadACargar;

    while(cargados < cantidadACargar)
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        if(valor % 2 == 0)
            pares++;
        else
            impares++;
        cargados++;
    }

    cout << "Pares: " << pares << ". Impares: " << impares;
    return 0;
}

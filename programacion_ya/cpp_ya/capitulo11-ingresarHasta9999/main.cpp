#include <iostream>

using namespace std;

int main()
{
    int valorIngresado, suma;

    suma = 0;
    valorIngresado = 0;

    do{
        suma += valorIngresado;

        cout << "Ingrese valor: ";
        cin >> valorIngresado;

    } while(valorIngresado != 9999);

    cout << "Suma: " << suma << endl;

    if(suma == 0)
        cout << "La suma es cero";
    else
        if(suma < 0)
            cout << "Valor ingresado menor que cero";
        else
            cout << "Valor Ingresado mayor a cero";
    return 0;
}

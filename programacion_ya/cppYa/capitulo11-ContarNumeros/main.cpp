#include <iostream>

using namespace std;

int main()
{
    int suma, cant, valor, promedio;
    suma = 0;
    cant = 0;
    do{
        cout << "Ingrese un valor (0 para finalizar): ";
        cin >> valor;
        if(valor != 0)
        {
            suma += valor;
            cant++;
        }
    } while(valor != 0);
    if(cant != 0)
    {
        promedio = suma/cant;
        cout << "El promedio de los valores ingresados es: ";
        cout << promedio;
    }
    else
    {
        cout << "No se ingresaron valores.";
    }
    return 0;
}

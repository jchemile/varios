#include <iostream>

using namespace std;

int main()
{
    int suma, f, valor, promedio;
    suma = 0;
    for(f = 1; f <= 10; f++)
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        suma = suma + valor;
    }
    cout << "La suma es: " << suma << endl;
    promedio = suma / 10;
    cout << "Promedio: " << promedio;
    return 0;
}

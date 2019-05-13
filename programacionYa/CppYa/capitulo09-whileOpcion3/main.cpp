#include <iostream>

using namespace std;

int main()
{
    int x, suma, valor;
    float promedio;
    x = 1;
    suma = 0;
    while(x <= 10)
    {
        cout << "Ingrese valor: ";
        cin >> valor;
        suma = suma + valor;
        x = x + 1;
    }
    promedio = (float)suma/10.0;
    cout << "Suma " << suma << endl;
    cout << "Promedio " << promedio << endl;
    return 0;
}

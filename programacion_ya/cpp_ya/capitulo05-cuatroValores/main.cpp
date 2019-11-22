#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2, valor3, valor4;
    cout << "Ingrese valor 1: ";
    cin >> valor1;
    cout << "Ingrese valor 2: ";
    cin >> valor2;
    cout << "Ingrese valor 3: ";
    cin >> valor3;
    cout << "Ingrese valor 4: ";
    cin >> valor4;
    cout << "Suma de los valores ingresados " << valor1+valor2+valor3+valor4 << endl;
    cout << "Promedio de los valores ingrseados " << (valor1+valor2+valor3+valor4)/4.0 << endl;
    return 0;
}

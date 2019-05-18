#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2, valor3;
    cout << "Valor 1: "<< endl;
    cin >> valor1;
    cout << "Valor 2: "<< endl;
    cin >> valor2;
    cout << "Valor 3: "<< endl;
    cin >> valor3;
    if(valor1 > valor2 && valor1 > valor3)
        cout << "Valor 1: " << valor1;
    else
        if (valor2 > valor3)
            cout << "Valor 2: " << valor2;
        else
            cout << "Valor 3: " << valor3;

    return 0;
}

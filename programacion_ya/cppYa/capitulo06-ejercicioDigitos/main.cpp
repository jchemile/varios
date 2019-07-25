#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    if(numero > -10 && numero < 10)
        cout << "Tiene un digito";
    else
        if(numero > -100 && numero < 100)
            cout << "Tiene dos digitos";

    return 0;
}

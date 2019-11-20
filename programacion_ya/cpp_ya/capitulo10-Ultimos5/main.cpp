#include <iostream>

using namespace std;

int main()
{
    int valor, suma;

    suma = 0;

    for(int i = 1; i <= 10;i++)
    {
        cout << "Ingrese indice " << i << ": ";
        cin >> valor;
        if(i > 5)
            suma += valor;
    }

    cout << "Suma ultimos numeros: " << suma;
    return 0;
}

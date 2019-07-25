#include <iostream>

using namespace std;

int main()
{
    int cantidad, n, f, valor;
    cantidad = 0;
    cout << "Cuantos valores ingresará: ";
    cin >> n;
    for(f = 0; f <= n; f++)
    {
        cout << "Ingrese el valor: ";
        cin >> valor;
        if(valor >= 1000)
            cantidad++;
    }

    cout << "Mayores que 1000: " << cantidad;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int negativos, positivos, mul15, pares, valor;

    negativos = 0;
    positivos = 0;
    mul15 = 0;
    pares = 0;

    for(int i = 0; i < 10; i++)
    {
        cout << "Ingrese valor para el indice " << i << ": ";
        cin >> valor;

        if(valor > 0)
            positivos++;
        else
            if(valor < 0)
                negativos++;

        if(valor % 15 == 0)
            mul15++;

        if(valor % 2 == 0)
            pares++;
    }

    cout << "Positivos " << positivos << ". Negativos " << negativos << endl;
    cout << "Multiplos de 15 " << mul15 << ". Pares: " << pares;
    return 0;
}

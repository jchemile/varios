#include <iostream>

using namespace std;

class Temperatura{
    int minima;
    int maxima;
    int actual;
public:
    Temperatura(int min, int max, int act);
    int rango()
    {
        int valor = maxima - minima;
        return valor;
    }
    void imprimir();
};

Temperatura::Temperatura(int min, int max, int act)
{
    minima = min;
    maxima = max;
    actual = act;
}

void Temperatura::imprimir()
{
    cout << "Minima: " << minima << endl;
    cout << "Maxima: " << maxima << endl;
    cout << "Actual: " << actual << endl;
}

int main()
{
    Temperatura temperatura1(5,25,17);
    cout << "Rango de variacion de temperaturas: " << temperatura1.rango() << endl;
    temperatura1.imprimir();
    return 0;
}

#include <iostream>

using namespace std;

class Temperatura{
    int minima;
    int maxima;
    int actual;
    void imprimir();
public:
    Temperatura(int min, int max, int actual);
};

Temperatura::Temperatura(int minima, int maxima, int actual)
{
    this -> minima = minima;
    this -> maxima = maxima;
    this -> actual = actual;
    imprimir();
}

void Temperatura::imprimir()
{
    cout << minima << " " << actual << " " << maxima << endl;
}

int main()
{
    Temperatura temperatura1(10 , 20, 15);
    Temperatura temperatura2(10 , 20, 15);
    return 0;
}

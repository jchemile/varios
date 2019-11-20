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

Temperatura::Temperatura(int min, int max, int act)
{
    this -> minima = min;
    this -> maxima = max;
    this -> actual = act;
    this -> imprimir();
}

void Temperatura::imprimir()
{
    cout << this -> minima << " " << this -> actual << " " << this -> maxima << endl;
}

int main()
{
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(25, 35, 29);
    return 0;
}

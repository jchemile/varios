#include <iostream>

using namespace std;

class Temperatura{
    const int media;
    int minima, maxima;
public:
    Temperatura(int min, int max, int me);
    void imprimir();
};

Temperatura::Temperatura(int min, int max, int me)::media(me)
{
    minima = min;
    maxima = max;
}

void Temperatura::imprimir()
{
    cout << minima << " " << maxima << " " << media << endl;
}

int main()
{
    Temperatura t1(10,20,14);
    t1.imprimir();
    Temperatura t2(5,9,7);
    t2.imprimir();
    return 0;
}

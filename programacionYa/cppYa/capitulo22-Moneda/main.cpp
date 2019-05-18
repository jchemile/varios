#include <iostream>

using namespace std;

class Moneda{
private:
    int valor;
public:
    Moneda(int v);
    void imprimir();
};

Moneda::Moneda(int v)
{
    valor = v;
}

void Moneda::imprimir()
{
    cout << "Valor de la moneda: " << valor << endl;
}

int main()
{
    Moneda moneda1(5);
    Moneda moneda2(10);
    moneda1.imprimir();
    moneda2.imprimir();
    return 0;
}

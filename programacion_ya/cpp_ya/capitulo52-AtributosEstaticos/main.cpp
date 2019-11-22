#include <iostream>

using namespace std;

class Prueba{
    int x1;
    static int x2;
public:
    Prueba(int v1, int v2) {x1 = v1; x2 = v2;};
    void imprimir();
};

int Prueba::x2;

void Prueba::imprimir()
{
    cout << x1 << "-" << x2 << endl;
}

int main()
{
    Prueba prueba1(1,1);
    prueba1.imprimir();
    Prueba prueba2(20, 20);
    prueba1.imprimir();
    return 0;
}

#include <iostream>

using namespace std;

class Punto{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int valorX, int valorY);
    void imprimir();
};

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(int valorX, int valorY)
{
    x = valorX;
    y = valorY;
}

void Punto::imprimir()
{
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}

int main()
{
    Punto prueba;
    Punto prueba2(8, 12);
    prueba.imprimir();
    prueba2.imprimir();
    return 0;
}

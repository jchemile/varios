#include <iostream>

using namespace std;

class Cuadrado{
private:
    int lado;
public:
    void inicializar();
    void perimetro();
    void superficie();
};

void Cuadrado::inicializar()
{
    cout << "Ingrese lado: ";
    cin >> lado;
}

void Cuadrado::perimetro()
{
    cout << "Perimetro: " << lado * 4 << endl;
}

void Cuadrado::superficie()
{
    cout << "Superficie: " << lado * lado << endl;
}

int main()
{
    Cuadrado cuadrado1;
    cuadrado1.inicializar();
    cuadrado1.perimetro();
    cuadrado1.superficie();
    return 0;
}

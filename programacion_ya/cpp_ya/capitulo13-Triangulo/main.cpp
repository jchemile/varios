#include <iostream>

using namespace std;

class Triangulo{
private:
    int lado1, lado2, lado3;
public:
    void inicializar();
    void ladoMayor();
    void esEquilatero();
};

void Triangulo::inicializar()
{
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;
}

void Triangulo::ladoMayor()
{
    cout << "Lado Mayor: ";
    if(lado1 > lado2 && lado1 > lado3)
        cout << lado1 << endl;
    else
        if(lado2 > lado3)
            cout << lado2 << endl;
        else
            cout << lado3 << endl;
}

void Triangulo::esEquilatero()
{
    if(lado1 == lado2 & lado1 == lado3)
        cout << "Es equilatero" << endl;
    else
        cout << "No es equilatero" << endl;
}

int main()
{
    Triangulo triangulo1;
    triangulo1.inicializar();
    triangulo1.ladoMayor();
    triangulo1.esEquilatero();
    return 0;
}

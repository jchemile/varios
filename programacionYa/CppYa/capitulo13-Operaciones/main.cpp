#include <iostream>

using namespace std;

class Operaciones{
private:
    int valor1, valor2;
public:
    void initializar();
    void suma();
    void resta();
    void producto();
    void cociente();
};

void Operaciones::initializar()
{
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
}

void Operaciones::suma()
{
    cout << "La SUMA es " << valor1 + valor2 << endl;
}

void Operaciones::resta()
{
    cout << "La RESTA es " << valor1 - valor2 << endl;
}

void Operaciones::producto()
{
    cout << "La PRODUCTO es " << valor1 * valor2 << endl;
}

void Operaciones::cociente()
{
    if(valor2 != 0)
        cout << "La COCIENTE es " << (float)valor1 / valor2 << endl;
    else
        cout << "No se puede dividir por cero";
}


int main()
{
    Operaciones operacion1;
    operacion1.initializar();
    operacion1.suma();
    operacion1.resta();
    operacion1.producto();
    operacion1.cociente();
    return 0;
}

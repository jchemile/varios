#include <iostream>

using namespace std;

class Operaciones{
private:
    int valor1;
    int valor2;
public:
    Operaciones(int valor1, int valor2);
    void suma();
    void resta();
    void producto();
    void cociente();
};

Operaciones::Operaciones(int val1, int val2)
{
    valor1 = val1;
    valor2 = val2;
}

void Operaciones::suma()
{
    cout << "Suma: " << valor1 + valor2 << endl;
}

void Operaciones::resta()
{
    cout << "Resta: " << valor1 - valor2 << endl;
}

void Operaciones::producto()
{
    cout << "Producto: " << valor1 * valor2 << endl;
}

void Operaciones::cociente()
{
    if(valor2 != 0)
        cout << "cociente: " << valor1 + valor2 << endl;
    else
        cout << "No se puede dividir por cero" << endl;
}

int main()
{
    Operaciones prueba1(15, 25);
    Operaciones prueba2(15, 0);

    cout << "PRUEBA 1" << endl;
    prueba1.suma();
    prueba1.resta();
    prueba1.producto();
    prueba1.cociente();

    cout << "PRUEBA 2" << endl;
    prueba2.suma();
    prueba2.resta();
    prueba2.producto();
    prueba2.cociente();
    return 0;
}

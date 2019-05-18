#include <iostream>

using namespace std;

class Tabla{
private:
    int valor;
public:
    Tabla();
    void imprimir();
    ~Tabla();
};

Tabla::Tabla()
{
    cout << "Ingrese Valor: ";
    cin >> valor;
}

void Tabla::imprimir()
{
    for(int f = valor; f <= valor * 10; f = f + valor)
    {
        cout << f << " - ";
    }
    cout << endl;
}

Tabla::~Tabla()
{
    cout << "Gracias por utilizar esete programa." << endl;
}

int main()
{
    Tabla tabla1;
    tabla1.imprimir();
    return 0;
}

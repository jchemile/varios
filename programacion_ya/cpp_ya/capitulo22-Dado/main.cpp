#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Dado{
private:
    int valor;
    void separador();
public:
    void tirar();
    void imprimir();
};

void Dado::separador()
{
    cout << "*****************" << endl;
}

void Dado::tirar()
{
    srand(time(NULL));
    valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
    separador();
    cout << valor << endl;
    separador();
}

int main()
{
    Dado d;
    d.tirar();
    d.imprimir();
    return 0;
}

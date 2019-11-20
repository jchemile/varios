#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Elementos{
private:
    int elementos[20];
public:
    Elementos();
    void imprimir();
    void imprimir(int indice);
    void imprimir(int indiceInicio, int indiceFinal);
};

Elementos::Elementos()
{
    srand(time(NULL));
    for(int i = 0; i < 20; i++)
    {
        elementos[i] = rand() % 20;
    }
}

void Elementos::imprimir()
{
    for(int i = 0; i < 20; i++)
        cout << "Indice: " << i << ". Valor: " << elementos[i] << endl;
    cout << endl;
}

void Elementos::imprimir(int indice)
{
    for(int i = 0; i <= indice; i++)
        cout << "Indice: " << i << ". Valor: " << elementos[i] << endl;
    cout << endl;
}

void Elementos::imprimir(int indiceInicio, int indiceFinal)
{
    for(int i = indiceInicio; i <= indiceFinal; i++)
        cout << "Indice: " << i << ". Valor: " << elementos[i] << endl;
    cout << endl;
}

int main()
{
    Elementos prueba;
    prueba.imprimir();
    prueba.imprimir(8);
    prueba.imprimir(5, 9);
    return 0;
}

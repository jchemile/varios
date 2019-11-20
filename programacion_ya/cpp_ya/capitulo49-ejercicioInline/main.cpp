#include <iostream>

using namespace std;

class VectorEnteros{
    int vec[5];
public:
    void cargar();
    void imprimir();
    void retornarSuma(){cout << vec[0] + vec[4];};
};

void VectorEnteros::cargar()
{
    for(int f = 0; f < 5; f++)
    {
        cout << "Ingrese valor para el indice "<<f << ": ";
        cin >> vec[f];
    }
}

void VectorEnteros::imprimir()
{
    for(int f = 0; f < 5; f++)
    {
        cout << "Indice: " << f << " Valor: " << vec[f] << endl;
    }
}

int main()
{
    VectorEnteros prueba;
    prueba.cargar();
    prueba.imprimir();
    prueba.retornarSuma();
    return 0;
}

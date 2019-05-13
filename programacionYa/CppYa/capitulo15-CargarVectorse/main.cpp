#include <iostream>

using namespace std;

class PruebaVector1{
private:
    int sueldos[5];
public:
    void cargar();
    void imprimir();
};

void PruebaVector1::cargar()
{
    for(int i = 0; i <5; i++)
    {
        cout << "Sueldo: ";
        cin >> sueldos[i];
    }
}

void PruebaVector1::imprimir()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Sueldo: " << sueldos[i] << endl;
    }
}

int main()
{
    PruebaVector1 prueba;
    prueba.cargar();
    prueba.imprimir();
    return 0;
}

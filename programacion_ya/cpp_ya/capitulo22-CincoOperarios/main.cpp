#include <iostream>

using namespace std;

class Operarios{
private:
    float sueldos[5];
public:
        Operarios();
        void imprimir();
};

Operarios::Operarios()
{
    cout << "Cargar sueldos: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Sueldo: ";
        cin >> sueldos[i];
    }
}

void Operarios::imprimir()
{
    for(int f = 0; f < 5; f++)
    {
        cout << sueldos[f] << endl;
    }
}

int main()
{
    Operarios prueba;
    prueba.imprimir();
    return 0;
}

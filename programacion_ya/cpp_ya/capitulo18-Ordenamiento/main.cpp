#include <iostream>

using namespace std;

class OrdenamientoSueldos{
private:
    int sueldos[5];
public:
    void cargar();
    void ordenar();
    void imprimir();
};

void OrdenamientoSueldos::cargar()
{
    for(int i = 0; i < 5;i++)
    {
        cout << "Valor: ";
        cin >> sueldos[i];
    }
}

void OrdenamientoSueldos::ordenar()
{
    for(int k = 0; k < 4; k++)
    {
        for(int f = 0; f < 4 - k; f++)
        {
            if(sueldos[f] > sueldos[f+1])
            {
            int aux;
            aux = sueldos[f];
            sueldos[f] = sueldos[f + 1];
            sueldos[f + 1] = aux;
            }
        }
    }
}

void OrdenamientoSueldos::imprimir()
{
    for(int i = 0; i < 5;i++)
    {
        cout << sueldos[i] << endl;
    }
}

int main()
{
    OrdenamientoSueldos prueba;
    prueba.cargar();
    cout << "SIN ORDENAR" << endl;
    prueba.imprimir();
    prueba.ordenar();
    cout << "ORDENADO" << endl;
    prueba.imprimir();
    return 0;
}

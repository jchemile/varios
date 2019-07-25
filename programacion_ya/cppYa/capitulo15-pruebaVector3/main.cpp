#include <iostream>

using namespace std;

class PruebaVector3{
private:
    int turnoMan[4];
    int turnoTar[4];
public:
    void cargar();
    void calcularGastos();
};

void PruebaVector3::cargar()
{
    cout << "Sueldos Vespertino" << endl;
    for(int f = 0; f < 4; f++)
    {
        cout << "Sueldo: ";
        cin >> turnoMan[f];
    }
    cout << "Sueldos Tarde" << endl;
    for(int f = 0; f < 4; f++)
    {
        cout << "Sueldo: ";
        cin >> turnoTar[f];
    }
}

void PruebaVector3::calcularGastos()
{
    float man = 0;
    float tar = 0;
    for(int f = 0; f < 4; f++)
    {
        man += turnoMan[f];
        tar += turnoTar[f];
    }
    cout << "Gastos Vespertino: " << man << endl;
    cout << "Gastos Tarde: " << tar << endl;
}

int main()
{
    PruebaVector3 pv3;
    pv3.cargar();
    pv3.calcularGastos();
    return 0;
}

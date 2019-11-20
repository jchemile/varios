#include <iostream>

using namespace std;

class CalcularMayor{
private:
    int retornarMayor(int valor1, int valor2);
public:
    void cargarValores();

};

int CalcularMayor::retornarMayor(int valor1, int valor2)
{
    int m;
    if(valor1 > valor2)
        m = valor1;
    else
        if(valor2 > valor1)
            m = valor2;
    return m;
}

void CalcularMayor::cargarValores()
{
    int valor1, valor2;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << "Mayor: " << retornarMayor(valor1, valor2);
}
int main()
{
    CalcularMayor prueba;
    prueba.cargarValores();
    return 0;
}

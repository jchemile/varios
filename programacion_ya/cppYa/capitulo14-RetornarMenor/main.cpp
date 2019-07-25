#include <iostream>

using namespace std;

class MayorMenor{
private:
    int calcularMayor(int v1, int v2, int v3);
    int calcularMenor(int v1, int v2, int v3);
public:
    void cargarValores();
};

int MayorMenor::calcularMayor(int v1, int v2, int v3)
{
    int m;
    if(v1 > v2 && v1 > v3)
        m = v1;
    else
        if(v2 > v3)
            m = v2;
        else
            if(v3 > v2)
                m = v3;

    return m;
}

int MayorMenor::calcularMenor(int v1, int v2, int v3)
{
    int m;
    if(v1 < v2 && v1 < v3)
        m = v1;
    else
        if(v2 < v3)
            m = v2;
        else
            if(v3 < v2)
                m = v3;

    return m;
}

void MayorMenor::cargarValores()
{
    int valor1, valor2, valor3;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << "Valor 3: ";
    cin >> valor3;
    int mayor, menor;
    mayor = calcularMayor(valor1, valor2, valor3);
    menor = calcularMenor(valor1, valor2, valor3);
    cout << "Mayor: " << mayor << ". Menor: " << menor;
}

int main()
{
    MayorMenor mayormenor1;
    mayormenor1.cargarValores();
    return 0;
}

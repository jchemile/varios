#include <iostream>

using namespace std;

class PruebaVector2{
private:
    float altura[5];
    float promedio;
public:
    void cargar();
    void calcularPromedio();
    void mayoresMenores();
};

void PruebaVector2::cargar()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Ingrese altura: ";
        cin >> altura[i];
    }
}

void PruebaVector2::calcularPromedio()
{
    float suma;
    suma = 0;
    for(int i = 0; i < 5; i++)
    {
        suma = suma + altura[i];
    }
    promedio = suma/5.0;
    cout << "Promedio= " << promedio << endl;
}

void PruebaVector2::mayoresMenores()
{
    int may, men;
    may = 0;
    men = 0;
    for(int i = 0; i < 5; i++)
    {
        if(altura[i] > promedio)
            may++;
        else
            if(altura[i] < promedio)
                men++;
    }
    cout << "Mayores: " << may << ". Menores: " << men;

}



int main()
{
    PruebaVector2 prueba;
    prueba.cargar();
    prueba.calcularPromedio();
    prueba.mayoresMenores();
    return 0;
}

#include <iostream>

using namespace std;

class SueldoOperario{
private:
    char nombres[5][40];
    float sueldos[5];
public:
    void cargar();
    void mayorSueldo();
};

void SueldoOperario::cargar()
{
    for(int f = 0; f < 5; f++)
    {
        cout << "Nombre: ";
        cin.getline(nombres[f],40);
        cout << "Sueldo: ";
        cin >> sueldos[f];
        cin.get();
    }
}

void SueldoOperario::mayorSueldo()
{
    float mayor;
    int pos;
    mayor = sueldos[0];
    pos = 0;
    for(int f = 1; f < 5; f++)
    {
        if(sueldos[f] > mayor)
        {
            mayor = sueldos[f];
            pos = f;
        }
    }
    cout << "Mayor: " << nombres[pos] << ". Sueldo: " << mayor;
}

int main()
{
    SueldoOperario prueba;
    prueba.cargar();
    prueba.mayorSueldo();
    return 0;
}

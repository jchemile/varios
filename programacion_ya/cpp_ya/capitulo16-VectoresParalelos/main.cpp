#include <iostream>

using namespace std;

class PersonasEdades{
private:
    char nombres[5][40];
    int edades[5];
public:
    void cargar();
    void mayoresEdad();
};

void PersonasEdades::cargar()
{
    for(int f = 0; f<5; f++)
    {
        cout << "Nombre:";
        cin.getline(nombres[f],40);
        cout << "Edad:";
        cin >> edades[f];
        cin.get();
    }
}

void PersonasEdades::mayoresEdad()
{
    cout << "Personas mayores de edad." << endl;
    for(int f = 0; f < 5; f++)
    {
        if(edades[f] >= 18)
        {
            cout << nombres[f] << endl;
        }
    }
}

int main()
{
    PersonasEdades prueba;
    prueba.cargar();
    prueba.mayoresEdad();
    return 0;
}

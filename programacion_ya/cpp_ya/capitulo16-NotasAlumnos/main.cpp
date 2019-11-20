#include <iostream>

using namespace std;

class Alumnos{
private:
    char nombre[4][40];
    int nota[5];
public:
    void cargar();
    void listarCondicion();
    int alumnosMuyBuenos();
};

void Alumnos::cargar()
{
    for(int i = 0; i < 4; i++)
    {
        cout << "Nombre: ";
        cin.getline(nombre[i],40);
        cout << "Nota: ";
        cin >> nota[i];
        cin.get();
    }
}

void Alumnos::listarCondicion()
{
    for(int i = 0; i < 4; i++)
    {
        cout << "Nombre: " << nombre[i] << endl;
        cout << "Nota: " << nota[i] << endl;
        cout << "Condicion: ";
        if(nota[i] >= 8)
        {
            cout << "Muy bueno" << endl;
        }
        else
            if(nota[i] >= 4 && nota[i] < 7)
                cout << "Bueno"<< endl;
            else
                cout << "Insuficiente" << endl;
    }
}

int Alumnos::alumnosMuyBuenos()
{
    int muyBuenos = 0;
    for(int i = 0; i < 4;i++)
    {
        if(nota[i] >= 8)
            muyBuenos++;
    }
    return muyBuenos;
}

int main()
{
    Alumnos prueba;
    prueba.cargar();
    prueba.listarCondicion();
    int buenos = prueba.alumnosMuyBuenos();
    cout << "Muy Buenos: " << buenos;
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

class Temperaturas{
private:
    char nombre[4][40];
    int temperaturas[4][3];
    float temperaturaPromedio[4];
public:
    void cargar();
    void imprimir();
    void imprimirPromedios();
    void promedio();
    void mayor();
};

void Temperaturas::cargar()
{
    for(int f = 0; f < 4; f++)
    {
        cout << "Nombre: ";
        cin.getline(nombre[f],40);
        {
            for(int c = 0; c < 3; c++)
            {
                cout << "Columna " << c << ": ";
                cin >> temperaturas[f][c];
            }
            cin.get();
        }
    }
}

void Temperaturas::imprimir()
{
    for(int f = 0; f < 4; f++)
    {
        cout << "Nombre: " << nombre[f] << endl;
        {
            for(int c = 0; c < 3; c++)
            {
                cout << "MES " << c << ": " << temperaturas[f][c] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void Temperaturas::promedio()
{
    for(int f = 0; f < 4; f++)
    {
        float sumaTotal;
        sumaTotal = 0;
        for(int c = 0; c < 3;c++)
        {
            sumaTotal += temperaturas[f][c];
        }
        temperaturaPromedio[f] = (sumaTotal / 3.0);

    }



}

void Temperaturas::imprimirPromedios()
{
    for(int f = 0; f < 4; f++)
    {
        cout << "Nombre: " << nombre[f] << ". Temperatura Promedio: " << temperaturaPromedio[f] << endl;
    }
}

void Temperaturas::mayor()
{
    float tempMayor;
    char nomMayor[40];
    for(int f = 0; f < 4; f++)
    {
        if(f == 0 || tempMayor < temperaturaPromedio[f])
        {
            tempMayor = temperaturaPromedio[f];
            strcpy(nomMayor, nombre[f]);
        }
    }

    cout << "Mayor Temperatura en promedio" << endl;
    cout << "Nombre " << nomMayor << ". Temperatura " << tempMayor <<endl;
}

int main()
{
    Temperaturas prueba;
    prueba.cargar();
    prueba.promedio();
    prueba.imprimir();
    prueba.imprimirPromedios();
    prueba.mayor();
    return 0;
}

#include <iostream>

using namespace std;

class Productos{
private:
    char nombre[5][40];
    float  precio[5];
public:
    void cargar();
    void mayorQuePrimero();
};

void Productos::cargar()
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Nombre: ";
        cin.getline(nombre[i],40);
        cout << "Precio: ";
        cin >> precio[i];
        cin.get();
    }
}

void Productos::mayorQuePrimero()
{
    for(int i = 0; i < 5; i++)
    {
        if(precio[0] < precio[i])
            cout << nombre[i] << endl;
    }
}

int main()
{
    Productos prueba;
    prueba.cargar();
    prueba.mayorQuePrimero();
    return 0;
}

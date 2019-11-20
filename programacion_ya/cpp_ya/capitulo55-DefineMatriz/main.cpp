#include <iostream>

using namespace std;

#define FILA 4
#define COLUMNA 2

class Matriz{
    int matriz[FILA][COLUMNA];
public:
    void cargar();
    void imprimir();
};

void Matriz::cargar()
{
    for(int f = 0; f < FILA; f++)
        for(int c = 0; c < COLUMNA; c++)
        {
            cout << "Ingrese valor para fila: " << f << " y para columna: " << c << ": ";
            cin >> matriz[f][c];
        }
}


void Matriz::imprimir()
{
    for(int f = 0; f < FILA; f++)
    {
        for(int c = 0; c < COLUMNA; c++)
        {
            cout << matriz[f][c] << " | ";
        }
        cout << endl;
    }
}

int main()
{
    Matriz matriz1;
    matriz1.cargar();
    matriz1.imprimir();
    return 0;
}

#include <iostream>

using namespace std;

class Matriz4{
private:
    int mat[2][5];
public:
    void cargarPorColumna();
    void imprimir();
};

void Matriz4::cargarPorColumna()
{
    for(int c = 0; c < 5; c++)
    {
        for(int f = 0; f < 2; f++)
        {
            cout << "Fila " << f << " Columna " << c << ": ";
            cin >> mat[f][c];
        }
    }
}

void Matriz4::imprimir()
{
    for(int f = 0; f < 2; f++)
    {
        for(int c = 0; c < 5; c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << endl;

    }
}

int main()
{
    Matriz4 prueba;
    prueba.cargarPorColumna();
    prueba.imprimir();
    return 0;
}

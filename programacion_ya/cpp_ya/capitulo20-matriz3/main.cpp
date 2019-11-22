#include <iostream>

using namespace std;

class Matriz3{
private:
    int mat[3][4];
public:
    void cargar();
    void primeraFila();
    void ultimaFila();
    void primeraColumna();
};

void Matriz3::cargar()
{
    for(int f = 0; f < 3;f++)
    {
        for(int c = 0; c < 4; c++)
        {
            cout << "Componente: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz3::primeraFila()
{
    cout << "PRIMERA FILA" << endl;
    for(int c = 0; c < 4; c++)
        cout << mat[0][c] << endl;
}

void Matriz3::ultimaFila()
{
    cout << "ULTIMA FILA" << endl;
    for(int c = 0; c < 4; c++)
        cout << mat[2][c] << endl;
}

void Matriz3::primeraColumna()
{
    cout << "PRIMERA COLUMNA" << endl;
    for(int f = 0; f < 3; f++)
        cout << mat[f][0] << endl;
}



int main()
{
    Matriz3 prueba;
    prueba.cargar();
    prueba.primeraFila();
    prueba.ultimaFila();
    prueba.primeraColumna();
    return 0;
}

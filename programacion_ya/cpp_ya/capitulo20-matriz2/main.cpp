#include <iostream>

using namespace std;

class Matriz2{
private:
    int mat[4][4];
public:
    void cargar();
    void imprimir();
    void imprimirDiagonal();
};

void Matriz2::cargar(){

    for(int f = 0; f < 4; f++)
        for(int c = 0; c < 4; c++)
        {
            cout << "Fila " << f << " Columna " << c << ": ";
            cin >> mat[f][c];
        }
}

void Matriz2::imprimir()
{
    for(int f = 0; f < 4; f++)
    {
        for(int c = 0; c < 4; c++)
        {
            cout << mat[f][c];
        }
        cout << "" << endl;
    }
}

void Matriz2::imprimirDiagonal()
{
    for(int f = 0; f < 4;f++)
    {
        for(int c = 0; c < 4; c++)
        {
            if(f == c)
                cout << " " << mat[f][c] << " ";
            else
                cout << " - ";
        }
        cout << "" << endl;
    }
}


int main()
{
    Matriz2 prueba;
    prueba.cargar();
    cout << "NORMAL" << endl;
    prueba.imprimir();
    cout << "DIAGONAL" << endl;
    prueba.imprimirDiagonal();
    return 0;
}

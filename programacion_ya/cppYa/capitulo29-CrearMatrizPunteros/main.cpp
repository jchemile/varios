#include <iostream>

using namespace std;

class Matriz{
private:
    int mat[3][3];
public:
    void cargar();
    void imprimir();
    void posMayor(int *pf, int *pc);
};

void Matriz::cargar()
{
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << "Valor: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz::imprimir()
{
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3; c++)
        {
            cout << mat[f][c] << " | ";
        }
        cout << endl;
    }
}

void Matriz::posMayor(int *pf, int *pc)
{
    int mayor = mat[0][0];
    *pf = 0;
    *pc = 0;
    for(int f = 0; f < 3; f++)
    {
        for(int c = 0; c < 3 ; c++)
        {
            if(mat[f][c] > mayor)
            {
                *pf = f;
                *pc = c;
            }
        }
    }

}

int main()
{
    Matriz prueba;
    prueba.cargar();
    prueba.imprimir();
    int fila, columna;
    prueba.posMayor(&fila, &columna);
    cout << "Fila: " << fila << ". Columna: " << columna;

    return 0;
}

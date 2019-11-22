#include <iostream>

using namespace std;

class PrimerParcial{
private:
    int cursoA[5];
    int cursoB[5];
public:
    void cargar();
    void mayorPromedio();
};

void PrimerParcial::cargar()
{
    cout << "CURSO A" << endl;
    for(int i = 0; i < 5;i++)
    {
        cout << "Nota alumno " << i << ": ";
        cin >> cursoA[i];
    }

    cout << "CURSO B" << endl;
    for(int i = 0; i < 5;i++)
    {
        cout << "Nota alumno " << i << ": ";
        cin >> cursoB[i];
    }
}

void PrimerParcial::mayorPromedio()
{
    int sumaA, sumaB;
    for(int i = 0; i < 5;i++)
    {
        sumaA += cursoA[i];
        sumaB += cursoB[i];
    }

    if(sumaA > sumaB)
        cout << "Curso A tiene mayor promedio" << endl;
    else
        if(sumaB > sumaA)
            cout << "Curso B tiene mayor promedio" <<endl;
        else
            cout << "Tienen el mismo promedio" << endl;
}

int main()
{
    PrimerParcial prueba;
    prueba.cargar();
    prueba.mayorPromedio();
    return 0;
}

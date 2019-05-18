#include <iostream>

using namespace std;

class Vector8Elem{
private:
    int vectorContenedor[8];
public:
    void cargar();
    void acumulado();
    void mayorA36();
    void mayorA50();
};

void Vector8Elem::cargar()
{
    for(int i = 0; i < 8; i++)
    {
        cout << "Ingrese Valor: ";
        cin >> vectorContenedor[i];
    }
}

void Vector8Elem::acumulado()
{
    int suma;
    for(int i = 0; i < 8; i++)
        suma += vectorContenedor[i];
    cout << "Sumatoria: " << suma <<endl;
}

void Vector8Elem::mayorA36()
{
    int may = 0;
    for(int i = 0; i < 8; i++)
    {
        if(vectorContenedor[i] > 36)
            may++;
    }
    cout << "Mayores a 36: " << may << endl;
}

void Vector8Elem::mayorA50()
{
    int may = 0;
    for(int i = 0; i < 8; i++)
    {
        if(vectorContenedor[i] > 50)
            may++;
    }
    cout << "Mayores a 50: " << may <<endl;
}
int main()
{
    Vector8Elem prueba;
    prueba.cargar();
    prueba.acumulado();
    prueba.mayorA36();
    prueba.mayorA50();
    return 0;
}

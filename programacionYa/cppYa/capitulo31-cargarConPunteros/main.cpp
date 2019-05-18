#include <iostream>

using namespace std;

class Vector{
private:
    int vec[5];
public:
    void cargar();
    void imprimir();
};

void Vector::cargar()
{
    int *paux = vec;
    for(int i = 0; i < 5; i++)
        cin >> *(paux+i);
}

void Vector::imprimir()
{
    int *paux = vec;
    for(int i = 0; i < 5; i++)
        cout << *(paux+i) << endl;
}
int main()
{
    Vector prueba;
    prueba.cargar();
    prueba.imprimir();
    return 0;
}

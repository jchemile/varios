#include <iostream>

using namespace std;

class EstructuraVector{
    int vec[5];
public:
    EstructuraVector();
    EstructuraVector(int valor);
    void imprimir();
};

EstructuraVector::EstructuraVector()
{
    for(int i = 0; i < 5; i++)
        vec[i] = 0;
}

EstructuraVector::EstructuraVector(int valor)
{
    for(int i = 0; i < 5; i++)
        vec[i] = valor;
}

void EstructuraVector::imprimir()
{
    for(int i = 0; i < 5; i++)
        cout << vec[i] << " ";
    cout << endl;
}

int main()
{
    EstructuraVector v1;
    v1.imprimir();
    EstructuraVector v2(12);
    v2.imprimir();
    return 0;
}

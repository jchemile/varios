#include <iostream>

using namespace std;

class VectorPrueba{
private:
    int valores[10];
public:
    void cargar();
    void ordenado();
};

void VectorPrueba::cargar()
{
    for(int i = 0; i < 10;i++)
    {
        cout << "Valor " << i << " ";
        cin >> valores[i];
    }
}

void VectorPrueba::ordenado()
{
    int ordenado = 1;
    for(int i = 1; i < 10; i++)
        if(valores[i] < valores[i-1])
            ordenado = 0;

    if(ordenado == 0)
        cout << "Desordenado";
    else
        cout << "Ordenado";
}

int main()
{
    VectorPrueba prueba;
    prueba.cargar();
    prueba.ordenado();
    return 0;
}

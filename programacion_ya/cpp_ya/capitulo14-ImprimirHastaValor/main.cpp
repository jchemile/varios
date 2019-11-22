#include <iostream>

using namespace std;

class imprimirHasta{
private:
    void ImprimirHastaTope(int v);
public:
    void solicitarValor();
};

void imprimirHasta::ImprimirHastaTope(int v)
{
    for(int i = 1; i <= v; i++)
        cout << i << endl;
}

void imprimirHasta::solicitarValor()
{
    int valor;
    cout << "Ingrese Valor: ";
    cin >> valor;
    ImprimirHastaTope(valor);
}

int main()
{
    imprimirHasta prueba;
    prueba.solicitarValor();
    return 0;
}

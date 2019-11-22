#include <iostream>

using namespace std;

class TablaMultiplicar{
private:
    void calcular(int v);
public:
    void cargarValor();
};

void TablaMultiplicar::calcular(int v)
{
    for(int f = v; f < v *10; f = f + v)
    {
        cout << f << " ";
    }
    cout << "\n";
}

void TablaMultiplicar::cargarValor()
{
    int valor;
    do{
        cout << "Ingrese valor(-1 para finalizar): ";
        cin >> valor;
        if(valor != -1)
        {
            calcular(valor);
        }
    }while(valor != -1);
}

int main()
{
    TablaMultiplicar tabla1;
    tabla1.cargarValor();
    return 0;
}

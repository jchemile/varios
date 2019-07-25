#include <iostream>

using namespace std;

class Enteros{
private:
    int vec[5];
public:
    void cargar();
    void menorYRepite();
};

void Enteros::cargar()
{
    for(int i = 0; i < 5;i++)
    {
        cout << "Valor: ";
        cin >> vec[i];
    }
}

void Enteros::menorYRepite()
{
    int menor;
    int repite;
    repite = 0;

    for(int i = 0; i < 5; i++)
    {
        if(i == 0 || menor > vec[i])
            menor = vec[i];

        if(menor == vec[i])
            repite++;
    }
    cout << "Menor: " << menor << ". Se repite: " << repite << " veces.";
}

int main()
{
    Enteros prueba;
    prueba.cargar();
    prueba.menorYRepite();
    return 0;
}

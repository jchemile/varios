#include <iostream>

using namespace std;

class Punto{
private:
    int x, y;
public:
    void inicializar();
    void imprimirCuadrante();
};

void Punto::inicializar()
{
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
}

void Punto::imprimirCuadrante()
{
    if(x > 0 && y > 0)
        cout << "Primero" << endl;
    else
        if(x < 0 && y > 0)
            cout << "Segundo" << endl;
        else
            if(x > 0 && y < 0)
                cout << "Tercero" << endl;
            else
                    if(x > 0 && y < 0)
                        cout << "Cuarto" << endl;
}

int main()
{
    Punto punto1;
    punto1.inicializar();
    punto1.imprimirCuadrante();
    return 0;
}

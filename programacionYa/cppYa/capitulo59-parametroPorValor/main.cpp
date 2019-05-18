#include <iostream>

using namespace std;

class Prueba{
public:
    void cambiar1(int z);
    void cambiar2(int &z);
};

void Prueba::cambiar1(int z)
{
    z = 0;
}

void Prueba::cambiar2(int &z)
{
    z = 0;
}

int main()
{
    Prueba prueba1;
    int num = 10;
    cout << "El valor de la variable num: " << num << endl;
    prueba1.cambiar1(num);
    cout << "El valor de la variable num luego de enviarla por valor:" << num << endl;
    prueba1.cambiar2(num);
    cout << "El valor de la vaiable num luego de pasar por referencia: " << num << endl;
    return 0;
}

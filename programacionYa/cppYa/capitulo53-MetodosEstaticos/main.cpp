#include <iostream>

using namespace std;

class Prueba{
    static int x1;
public:
    static int retornarX();
};

int Prueba::x1 = 20;

int Prueba::retornarX()
{
    return x1;
}

int main()
{
    cout << Prueba::retornarX() << endl;
    return 0;
}

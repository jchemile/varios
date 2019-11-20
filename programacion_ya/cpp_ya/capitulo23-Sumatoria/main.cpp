#include <iostream>

using namespace std;

class Sumatoria{
private:
    int valor;
    int sumatoria;
public:
    Sumatoria();
    ~Sumatoria();
};

Sumatoria::Sumatoria()
{
    cout << "SE SUMARAN LOS VALORES INGRESADOS [CON CERO TERMINA]" << endl;
    do{
        cout << "Ingrese valor: ";
        cin >> valor;
        sumatoria += valor;
    }while(valor != 0);
}

Sumatoria::~Sumatoria()
{
    cout << "La sumatoria fue: " << sumatoria << endl;
}
int main()
{
    Sumatoria prueba;
    return 0;
}

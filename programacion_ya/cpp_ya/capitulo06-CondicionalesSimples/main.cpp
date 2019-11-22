#include <iostream>

using namespace std;

int main()
{
    float sueldo;
    cout << "Ingrese el sueldo:";
    cin >> sueldo;
    if(sueldo > 3000)
        cout << "Esta persona debe abonar impuestos";
    return 0;
}

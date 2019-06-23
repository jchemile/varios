#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string nombre;
    cout << "Ingrese su nombre:" << endl;
    cin >> nombre;
    cout << "Hola " << nombre << endl;
    cout << "Presione cualquier tecla para salir.";
    getch();
    return 0;
}

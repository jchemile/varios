#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char nombre[30];
    int edad;
    cout << "Ingrese su nombre y edad" << endl;
    cin >> nombre >> edad;
    cout << "Hola " << nombre << ". Ud. tiene " << edad + 100 << " años." << endl;
    cout << "Presione cualquier tecla para salir.";
    getch();
    return 0;
}

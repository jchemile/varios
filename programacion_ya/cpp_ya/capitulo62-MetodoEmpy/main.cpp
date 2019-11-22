#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    if(cadena.empty())
        cout << "No se ingresaron caracteres" << endl;
    else
        cout << "Longitud: " << cadena.length();
    return 0;
}

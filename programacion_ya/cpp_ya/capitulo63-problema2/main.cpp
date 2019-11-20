#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingrese cadena: ";
    getline(cin, cadena);
    for(int f = 0; f < cadena.length(); f++)
    {
        if(cadena.at(f) == ' ')
        {
            cadena.erase(f, 1);
        }

    }
    cout << "Sin espacios: " << cadena;
    return 0;
}

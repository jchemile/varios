#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;
    cout << "ingrese una palabra: ";
    getline(cin, cadena);
    for(int f = 0; f < cadena.length(); f++)
        cout << cadena.at(f) << " - ";
    return 0;
}

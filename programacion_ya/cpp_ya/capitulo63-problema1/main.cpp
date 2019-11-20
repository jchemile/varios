#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cad1;
    cout << "Ingrese cadena: ";
    getline(cin, cad1);
    for(int f = 0; f < cad1.length(); f++)
        cout << cad1.at(f) << " - ";
    return 0;
}

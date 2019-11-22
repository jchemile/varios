#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;
    cout << "Ingrese una cadena de caracteres" << endl;
    getline(cin, cadena2);
    cout << "Primer string: " << cadena1 << endl;
    cout << "Segundo string: " << cadena2;
    return 0;
}

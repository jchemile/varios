#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena1 = "Hola Mundo";
    string cadena2;
    cout << "Cadena sin espacios en blanco" << endl;
    cin >> cadena2;
    cin.get();
    cout << "Primer string: " << cadena1 << endl;
    cout << "Segundo string: " << cadena2;
    return 0;
}

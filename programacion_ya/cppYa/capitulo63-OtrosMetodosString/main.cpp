#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cad = "Uno tres";
    cout << "Cadena original: " << cad << endl;
    cad.append(" cuatro");
    cout << "Despues de append: " << cad << endl;
    cad.insert(3, " dos");
    cout << "Despu�s de insert: " << cad << endl;
    cad.erase(0, 4);
    cout << "Despu�s de erase: " << cad << endl;

    return 0;
}

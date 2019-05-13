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
    cout << "Después de insert: " << cad << endl;
    cad.erase(0, 4);
    cout << "Después de erase: " << cad << endl;

    return 0;
}

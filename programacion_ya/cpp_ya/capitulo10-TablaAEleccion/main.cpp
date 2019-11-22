#include <iostream>

using namespace std;

int main()
{
    int valor;

    cout << "Ingrese la tabal del numero que desea ver: ";
    cin >> valor;

    for(int i = 0; i <= 12; i++)
        cout << i * valor << endl;
    return 0;
}

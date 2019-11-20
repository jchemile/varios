#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese valor: ";
    cin >> num;
    if(num < 0)
        cout << "Negativo";
    else
        if(num == 0)
            cout << "Nulo";
        else
            cout << "Positivo";
    return 0;
}

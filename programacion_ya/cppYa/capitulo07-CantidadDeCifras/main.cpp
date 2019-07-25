#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Numero entero positivo";
    cin >> num;

    if(num < 10)
        cout << "Una Cifra";
    else
        if(num < 100)
            cout << "Dos cifras";
        else
            if(num < 1000)
                cout << "Tres Cifras";
            else
                cout << "Mas de tres cifras";

    return 0;
}

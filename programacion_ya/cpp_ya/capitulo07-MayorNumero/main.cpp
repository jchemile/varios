#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Ingrese Valor 1";
    cin >> num1;
    cout << "Ingrese Valor 2";
    cin >> num2;
    cout << "Ingrese Valor 3";
    cin >> num3;

    if(num1 > num2 && num1 > num3)
        cout << "Mayor es num1: " << num1;
    else
        if(num2 > num3)
            cout << "Mayor es num2: " << num2;
        else
            if(num3 > num2)
                cout << "Mayor es num3: " << num3;
    return 0;
}

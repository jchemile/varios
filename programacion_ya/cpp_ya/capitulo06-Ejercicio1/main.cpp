#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    cout << "Valor: ";
    cin >> num1;
    cout << "Valor: ";
    cin >> num2;
    if(num1 > num2)
    {
        cout << "Suma: " << num1 + num2 << endl;
        cout << "Diferencia: " << num1 - num2 << endl;
    }
    else
        if(num1 < num2)
        {
            cout << "Producto: " << num1 * num2 << endl;
            cout << "Division: " << num1 / num2 << endl;
        }
    return 0;
}

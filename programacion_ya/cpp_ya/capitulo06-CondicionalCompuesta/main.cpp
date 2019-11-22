#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    if(num1 > num2)
    {
        cout << num1;
    }
    else
    {
        cout << num2;
    }
    return 0;
}

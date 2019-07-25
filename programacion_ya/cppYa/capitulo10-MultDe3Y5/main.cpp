#include <iostream>

using namespace std;

int main()
{
    int mul3, mul5, valor, f;
    mul3 = 0;
    mul5 = 0;
    for(f = 1; f <= 10; f++)
    {
        cout << "Ingrese un valor:";
        cin >> valor;
        if(valor % 3 == 0)
            mul3++;
        else
            mul5++;
    }
    cout << "Mul 3: " << mul3 << ". Mul 5: " << mul5;
    return 0;
}

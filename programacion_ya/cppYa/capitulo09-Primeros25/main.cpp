#include <iostream>

using namespace std;

int main()
{
    int x, n;
    x = 11;
    n = 1;

    while( n <= 25)
    {
        cout << "Iteracion = " << n << " Valor de x =" << x * n << endl;
        n++;
    }
    return 0;
}

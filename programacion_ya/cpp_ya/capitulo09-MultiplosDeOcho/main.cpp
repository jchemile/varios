#include <iostream>

using namespace std;

int main()
{
    int n;
    n = 1;
    while((n * 8) <= 500)
    {
        cout << "Interacion = " << n <<" Valor "<<n * 8 << endl;
        n++;
    }

    return 0;
}

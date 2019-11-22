#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *pe;
    pe = &x;
    cout << x << endl;
    cout << *pe << endl;
    *pe = 5;
    cout << x << endl;

    float valor = 10.9;
    float *pf;
    pf = &valor;
    cout << *pf;
    return 0;
}

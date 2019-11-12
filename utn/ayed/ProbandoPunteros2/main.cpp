#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo* sig;
};

int main()
{
    int *x, *y;
    int i;
    i = 10;
    x = &i;
    y = x;
    *x = *y +1;
    cout << i << endl;
    *y = *x + 1;
    cout << i << endl;
    return 0;
}

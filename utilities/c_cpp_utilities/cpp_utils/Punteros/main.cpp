#include <iostream>

using namespace std;

int main()
{
    int *x;
    int *y;
    int i;
    i = 10;
    x = &i;
    y = x;
    *x = *y + 1;
    cout << *x << endl;
    *y = *x + 1;
    cout << i << endl;
    y = new int;
    *y = *x/2;
    cout << *y << endl;
    cout << *x << endl;


}

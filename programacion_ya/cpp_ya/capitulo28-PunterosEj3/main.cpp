#include <iostream>

using namespace std;

int main()
{
    float x1, x2;
    float *punt;

    punt = &x1;
    *punt = 10.5;
    punt = &x2;
    *punt = 10.2;
    cout << x1 << endl;
    cout << x2 << endl;
    return 0;
}

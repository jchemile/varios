#include <iostream>

using namespace std;

int main()
{
    int x1 = 50;
    int x2 = 100;
    int *punt1, *punt2;
    punt1 = &x1;
    punt2 = punt1;
    *punt1 = 2000;
    cout << x1 << endl;
    cout << x2 << endl;
    cout << *punt1 << endl;
    cout << *punt2 << endl;

    punt2 = &x2;
    x1 = 1;
    x2 = 2;
    cout << *punt1 << endl;
    cout << *punt2 << endl;
    *punt1 = 500;
    *punt2 = 600;
    cout << x1 << endl;
    cout << x2 << endl;
    return 0;
}

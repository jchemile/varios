#include <iostream>

using namespace std;

int main()
{
    int x1 = 5;
    int x2 = 10;
    int x3 = 15;
    int *punt;

    punt = &x1;
    cout << "En la direccion " << punt << " Se aloja: " << *punt << endl;

    punt = &x2;
    cout << "En la direccion " << punt << " Se aloja: " << *punt << endl;

    punt = &x3;
    cout << "En la direccion " << punt << " Se aloja: " << *punt << endl;

    return 0;
}

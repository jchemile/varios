#include <iostream>

using namespace std;

int main()
{
    float f;
    cout << "Ingrese una temperatura en F:" << endl;
    cin >> f;
    cout << f << " F = " << 5.0/9*(f-32)<< " C" << endl;
    return 0;
}

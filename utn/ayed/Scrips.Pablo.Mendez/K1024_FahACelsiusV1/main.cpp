#include <iostream>

using namespace std;

int main()
{
    float f,c;
    cout << "Ingrese una temperatura en F:" << endl;
    cin >> f;
    c = (f-32)*5/9;
    cout << f << " F = " << c << " C" << endl;
    return 0;
}

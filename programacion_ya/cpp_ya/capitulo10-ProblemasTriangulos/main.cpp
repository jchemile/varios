#include <iostream>

using namespace std;

int main()
{
    int cantidad, mayorA12;
    float base, altura, area;

    cout << "Triangulos a ingresar: ";
    cin >> cantidad;

    mayorA12 = 0;

    for(int i = 0; i < cantidad; i++)
    {
        cout <<"Base: ";
        cin >> base;
        cout <<"Altura: ";
        cin >> altura;
        area = (base*altura)/2.0;
        if(area > 12)
            mayorA12++;
        cout << "Area: " << area << endl;
    }
    cout << "Mayores a 12 " << mayorA12;
    return 0;
}

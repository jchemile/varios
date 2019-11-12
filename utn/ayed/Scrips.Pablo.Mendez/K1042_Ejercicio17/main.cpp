#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int cat1, cat2, cat3, cat4;
    cat1 = cat2 = cat3 = cat4 = 0;
    float sueldo;
    cout << "Sueldo empleado " << i << ":" << endl;
    cin >> sueldo;
    while (sueldo)
    {
        i++;
        if (sueldo < 1520)
            cat1++;
        else
        {
            if (sueldo >= 1520 && sueldo < 2780)
                cat2++;
            else
            {
                if (sueldo >= 2780 && sueldo < 5999)
                    cat3++;
                else
                    cat4++;
            }
        }
        cout << "Sueldo empleado " << i << ":" << endl;
        cin >> sueldo;
    }
    cout << "Sueldos menores a $1520: " << cat1 << endl;
    cout << "Sueldos de más de $1520 y menos de $2680: " << cat2 << endl;
    cout << "Sueldos de más de $2680 y menos de $5999: " << cat3 << endl;
    cout << "Sueldos de más de $5999: " << cat4 << endl;
    return 0;
}

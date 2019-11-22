#include <iostream>

using namespace std;

class Vector{
    int vec[5];
public:
    void cargar();
    void imprimir();
    void mayorMenor(int &may, int &men);
};

void Vector::cargar()
{
    for(int f = 0; f < 5;f++)
    {
        cout << "Ingrese elemento: "<< endl;
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    for(int f = 0; f < 5; f++)
    {
        cout << vec[f] << " - ";
    }
    cout << endl;
}

void Vector::mayorMenor(int &may, int &men)
{
    may = vec[0];
    men = vec[0];
    for(int f = 1; f < 5;f++)
    {
        if(vec[f]>may)
            may = vec[f];
        else
            if(vec[f]< men)
                men = vec[f];
    }
}

int main()
{
    Vector vector1;
    vector1.cargar();
    vector1.imprimir();
    int mayor, menor;
    vector1.mayorMenor(mayor, menor);
    cout << "Mayor " << mayor;
    cout << "Menor " << menor;
    return 0;
}

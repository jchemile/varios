#include <iostream>

using namespace std;

class Vector{
private:
    int vec[5];
public:
    void cargar();
    void retornarMayorMenor(int *pmay, int *pmen);
};

void Vector::cargar()
{
    for(int i = 0; i < 5;i++)
    {
        cout << "Valor: ";
        cin >> vec[i];
    }
}

void Vector::retornarMayorMenor(int *pmay, int *pmen)
{
    *pmay = vec[0];
    *pmen = vec[0];
    for(int f = 1; f < 5;f++)
        if(vec[f] > *pmay)
            *pmay = vec[f];
        else
            if(vec[f] < *pmen)
                *pmen = vec[f];
}

int main()
{
    Vector vector1;
    vector1.cargar();
    int ma, me;
    vector1.retornarMayorMenor(&ma, &me);
    cout << "Mayor " << ma << ". Menor " << me;
    return 0;
}

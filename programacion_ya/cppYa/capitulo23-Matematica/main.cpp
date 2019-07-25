#include <iostream>

using namespace std;

class Matematica{
public:
    int mayor(int x1, int x2);
    int mayor(int x1, int x2, int x3);
    float mayor(float x1, float x2);
    float mayor(float x1, float x2, float x3);
};

int Matematica::mayor(int x1, int x2)
{
    if(x1 > x2)
        return x1;
    else
        return x2;
}

int Matematica::mayor(int x1, int x2, int x3)
{
    if(x1 > x2 && x1 > x3)
        return x1;
    else
        if(x2 > x3)
            return x2;
        else
            return x3;
}

float Matematica::mayor(float x1, float x2)
{
    if(x1 > x2)
        return x1;
    else
        return x2;
}

float Matematica::mayor(float x1, float x2, float x3)
{
    if(x1 > x2 && x1 > x3)
        return x1;
    else
        if(x2 > x3)
            return x2;
        else
            return x3;
}

int main()
{
    Matematica m1;
    cout << m1.mayor(6,8) << endl;
    cout << m1.mayor(9, 40, 5) << endl;
    cout << m1.mayor(6.6f,8.99f) << endl;
    cout << m1.mayor(9.41f, 40.0f, 5.1f) << endl;
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char caracteres1[9];
    char caracteres2[9];

    cout << "caracterse 1 ";
    cin >> caracteres1;
    cout << "caracterse 2 ";
    cin >> caracteres2;

    if(strcmp(caracteres1, caracteres2) == 0)
        cout << "iguales" << endl;
    else
        cout << "distintas" << endl;
}

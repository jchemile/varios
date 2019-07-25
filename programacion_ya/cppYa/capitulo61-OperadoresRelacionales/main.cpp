#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;
    cout << "Primer cadena: ";
    getline(cin, s1);
    cout << "Segunda cadena: ";
    getline(cin, s2);
    if(s1 > s2)
        cout << s1 << " es el mayor alfabeticamente" << endl;
    else
        if (s2 > s1)
            cout << s2 << " es el mayor alfabeticamente" << endl;
        else
            cout << "Cadenas iguales";
    return 0;
}

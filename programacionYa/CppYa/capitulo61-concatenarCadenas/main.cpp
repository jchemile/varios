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
    string s3 = s1 + "-" + s2;
    cout << "String concatenado: " << s3;
    return 0;
}

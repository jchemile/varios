#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cad[5];
    strcpy(cad, "sol");
    char *pc;

    pc = cad;
    cout << pc << endl;

    pc++;
    cout << pc << endl;

    pc++;
    cout << pc << endl;

    pc--;
    cout << pc << endl;

    int x[5] = {10, 50, 100, 99, 33};
    int *pe;
    pe = &x[3];
    cout << "pe " << pe << endl;
    cout << "*pe " << *pe << endl;

    pe--;
    cout << "pe " << pe << endl;
    cout << "*pe " << *pe << endl;
    return 0;
}

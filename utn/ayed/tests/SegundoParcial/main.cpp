#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *f;

    f = fopen("cagandoejemplos.dat", "wb");

    for(int i = 2; i < 5; i++)
    {
        fwrite(&i,sizeof(int),1,f);
    }

    fclose(f);


    int tam = sizeof(f);
    int tamPuntero = sizeof(*f);
    cout << tam << endl;
    cout << tamPuntero;
    return 0;
}

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *archivo;
    archivo = fopen("ejercicio1", "rb");
    float vec[5];

    fread(vec, sizeof(float),5,archivo);
    float f;

    for(f=0;f<5;f++){
        cout << vec[f];
    }


    fclose(archivo);
    return 0;
}

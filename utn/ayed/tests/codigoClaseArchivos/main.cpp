#include <iostream>

using namespace std;

int main()
{
    FILE *archivo;
    archivo = fopen("prueba.clase9", "wb");

    if(archivo)
    {
        for(int i = 0; i <=100; i++)
        {
            fwrite(&i,sizeof(int))
        }
    }
    return 0;
}

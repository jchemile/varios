#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
    int*pe;

    pe = &f;
    for(*pe = 1; *pe<=10;*pe= *pe+1)
    {
        printf("%i\n",f);
    }
    return 0;
}

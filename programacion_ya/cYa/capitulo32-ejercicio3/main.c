#include <stdio.h>
#include <stdlib.h>

int main()
{
    float z1, z2;
    float *pf;

    pf = &z1;
    *pf = 10.2;

    pf = &z2;
    *pf = 20.9;

    printf("%0.2f %0.2f", z1, z2);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

float retornarPromedio(int v1, int v2, int v3)
{
    float promedio;
    promedio = (v1 + v2 + v3)/ 3.0;
    return promedio;
}

int main()
{
    float prom = retornarPromedio(10, 4, 16);
    printf("%0.2f", prom);

    return 0;
}

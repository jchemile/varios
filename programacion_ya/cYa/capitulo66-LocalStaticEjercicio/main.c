#include <stdio.h>
#include <stdlib.h>

void proximoMultiplo2()
{
    static int x = 0;
    x += 2;
    printf("%i ", x);
}

int main()
{
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    proximoMultiplo2();
    return 0;
}

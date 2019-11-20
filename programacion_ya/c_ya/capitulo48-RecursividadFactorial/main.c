#include <stdio.h>
#include <stdlib.h>

int factorial(int fact)
{
    if (fact > 0)
    {
        int valor = fact * factorial(fact - 1);
        return valor;
    }
    else
        return 1;
}

int main()
{
    printf("Factorial de 4 es %i", factorial(4));
    return 0;
}

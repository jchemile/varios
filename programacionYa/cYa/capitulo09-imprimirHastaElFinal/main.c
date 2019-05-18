#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    printf("Ingrese el valor final: ");
    scanf("%i", &n);
    x = 1;

    while(x < n)
    {
        printf("%i", x);
        printf(" - ");
        x = x + 1;
    }
    return 0;
}

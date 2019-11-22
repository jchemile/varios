#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    x = 1;
    while(x <= 100)
    {
        printf("%i", x);
        printf(" - ");
        x = x + 1;
    }
    return 0;
}

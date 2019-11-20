#include <stdio.h>
#include <stdlib.h>

struct coordenada{
    int x;
    int y;
};

union punto{
    int v[2];
    struct coordenada co;
};

int main()
{
    union punto p;
    p.co.x = 10;
    p.co.y = 20;
    printf("%i %i\n", p.co.x, p.co.y);
    printf("%i %i\n", p.co.x, p.co.y);
    return 0;
}

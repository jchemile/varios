#include <stdio.h>

unsigned int compute(const unsigned int n, const unsigned int d)
{
    return n & (d - 1);
}

int compute(int n, int d)
{
    while(n > 0){
        n = n - d;
    }

    return n + d;
}

void implementation()
{
    const unsigned int n = 18;
    const unsigned int s = 3;
    const unsigned int d = 1U << s;

    unsigned int m;
    m  = compute(n, d);

    printf("%d %% %d = %d", n, d, m);
}

void implementation2(){
    const unsigned int n = 38;
    const unsigned int d = 7;

    unsigned int m = compute(n, d);
    printf("%d %% %d = %d", n, d, m);
}

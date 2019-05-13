#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1 = 'A';
    char c2 = 'B';
    char *pc;

    pc = &c1;
    printf("%c\n", c1);

    *pc = 'a';
    printf("%c\n", c1);

    c1 = 'Z';
    printf("%c\n",*pc);

    pc = &c2;
    printf("%c\n", *pc);

    return 0;
}

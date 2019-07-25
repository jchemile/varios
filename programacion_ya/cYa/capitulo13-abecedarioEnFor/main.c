#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    for(letra = 'a'; letra <= 'z'; letra++)
    {
        printf("%c - ", letra);
    }
    printf("\n");
    for(letra = 'A'; letra <= 'Z'; letra++)
    {
        printf("%c -", letra);
    }
    return 0;
}

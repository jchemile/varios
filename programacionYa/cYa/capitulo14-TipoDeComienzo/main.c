#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[100];

    printf("Ingrese palabra: ");
    gets(palabra);

    if(palabra[0] == 'A')
        printf("Empieza con A");
    else
        if(palabra[0] == 'a')
            printf("Empieza con a");
    else
        printf("No empieza ni con a, ni A");

    return 0;
}

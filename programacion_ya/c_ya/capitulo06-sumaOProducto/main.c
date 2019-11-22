#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float suma, producto;

    printf("Num1: ");
    scanf("%i", &num1);
    printf("Num2: ");
    scanf("%i", &num2);

    suma = num1 + num2;
    producto = num1 * num2;

    if(num1 > num2)
    {
        printf("%f", suma);
    }
    else
    {
        printf("%f", producto );
    }
    getch();
    return 0;
}

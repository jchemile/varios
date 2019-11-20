#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Num1: ");
    scanf("%i", &num1);
    printf("Num2: ");
    scanf("%i", &num2);

    if(num1 > num2)
    {
        printf("Num1 mayor");
    }
    else
    {
        printf("Num2 mayor");
    }
    getch();
    return 0;
}

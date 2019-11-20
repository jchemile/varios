#include <stdio.h>
#include <stdlib.h>

struct persona{
    char nombre[50];
    int edad;
};

int main()
{
    const short int v1 = 30000;
    const int v2 = 20000000;
    const long int v3 = 200000000;
    const long long int v4 = 20000000000;
    const float r1 = 10.55;
    const double r2 = 100.99;
    const char l1 = 'A';
    const char titulo[7] ="Inicio";
    const struct persona per1 = {"juan", 18};

    printf("Una constantante short int: %i\n", v1);
    printf("Una constantante int: %i\n", v2);
    printf("Una constantante long int: %li\n", v3);
    printf("Una constantante long long int: %li\n", v4);
    printf("Una constantante float :%0.2f\n)", r1);
    printf("Una constantante float :%0.2f\n)", r2);
    printf("Una constantante cadena de caracteres: %s\n", titulo);
    printf("Una constantante de tipo registro:%s %i\n", per1.nombre, per1.edad);
    return 0;
}

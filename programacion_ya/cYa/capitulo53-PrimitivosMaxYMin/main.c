#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("MININO valor para SIGNED CHAR = %i\n", SCHAR_MIN);
    printf("MAXIMO valor para SIGNED CHAR = %i\n", SCHAR_MAX);
    printf("MAXIMO valor para UNSIGNED CHAR = %i\n\n", UCHAR_MAX);

    printf("MININO valor para SIGNED SHORT INT = %i\n", SHRT_MIN);
    printf("MAXIMO valor para SIGNED SHORT INT = %i\n", SHRT_MAX);
    printf("MAXIMO valor para UNSIGNED SHORT INT = %i\n\n", USHRT_MAX);

    printf("MININO valor para SIGNED INT = %i\n", INT_MIN);
    printf("MAXIMO valor para SIGNED INT = %i\n", INT_MAX);
    printf("MAXIMO valor para UNSIGNED INT = %u\n\n", UINT_MAX);

    printf("MININO valor para SIGNED LONG INT = %li\n", LONG_MIN);
    printf("MAXIMO valor para SIGNED LONG INT = %li\n", LONG_MAX);
    printf("MAXIMO valor para UNSIGNED LONG INT = %lu\n\n", ULONG_MAX);

    printf("MININO valor para SIGNED LONG LONG INT = %lli\n", LONG_LONG_MIN);
    printf("MAXIMO valor para SIGNED LONG LONG INT = %lli\n", LONG_LONG_MAX);
    printf("MAXIMO valor para UNSIGNED LONG LONG INT = %llu\n\n", ULONG_LONG_MAX);
    return 0;
}

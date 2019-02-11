#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size of an int: %zd\n", sizeof(int));
    printf("Size of a Char: %zd\n", sizeof(char));
    printf("Size of an long: %zd\n", sizeof(long));
    printf("Size of an long long: %zd\n", sizeof(long long));
    printf("Size of an double: %zd\n", sizeof(double));
    printf("Size of an long double: %zd\n", sizeof(long double));
    return 0;
}

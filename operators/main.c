#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101

    int result = 0;

    result = a & b; // 0000 1100
    printf("%d\n", result); // 12

    result = a | b; // 0011 1101
    printf("%d\n", result); // 61

    result = a << 2 ;// 1111 0000
    printf("%d\n", result); // 240

    return 0;
}

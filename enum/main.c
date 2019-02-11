#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MIRCOSOFT};
    enum companies com1,com2,com3;
    com1 = GOOGLE;
    com2 = XEROX;
    com3 = EBAY;

    printf("%d\n%d\n%d\n", com2, com1, com3);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours = 0;
    int grosspay = 0;
    int nonovertime = 0;
    int overtime = 0;
    float netpay = 0.0;
    float taxpaid = 0.0;

    printf("How many hours did you work: \n");
    scanf("%d", &hours);

    if(hours > 40)
    {
        nonovertime = 40 * 12;
        overtime = (hours - 40) * 18;
        grosspay = nonovertime + overtime;

        printf("Your Gross Pay is (with overtime): %d\n", grosspay);
    }
    else
    {
        grosspay = hours * 12;
        printf("Your Gross Pay is: %d\n", grosspay);
    }

    if(grosspay < 300)
    {
        taxpaid = (grosspay / 100) * 15;
        netpay = grosspay - taxpaid;
    }
    else if (grosspay < 450)
    {
        taxpaid = ((grosspay - 300) * 0.20) + 45;
        printf("tax paid: %.2f\n", taxpaid);
        netpay = grosspay - taxpaid;
    }
    else
    {
        taxpaid = ((grosspay - 450) * 0.25) + 45 + 30;
        printf("tax paid: %.2f\n", taxpaid);
        netpay = grosspay - taxpaid;
    }

    printf("Your Net Pay is: %f\n", netpay);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    int minutesInYear = 0;
    int numberOfYears = 0;
    int numberOfDays = 0;
    int minutesLeftOver = 0;
    int minutesLeft = 0;

    printf("Please enter a Number of Minutes: \n");
    scanf("%d", &minutes);
    minutesInYear = 60 * 24 * 365;

    printf("Minutes Entered: %d\n", minutes);
    printf("Number of Minutes in a Year %d\n", minutesInYear);

    numberOfYears = minutes / minutesInYear;
    minutesLeftOver = minutes % minutesInYear;
    numberOfDays = minutesLeftOver / (60 * 24);
    minutesLeft = minutesLeftOver % (60 * 24);

    printf("Number of Years: %d\n Number of Days: %d\n", numberOfYears, numberOfDays);
    printf("Minutes Left Over: %d\n", minutesLeft);

    return 0;
}

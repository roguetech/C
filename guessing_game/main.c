#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    int guess = 0;

    for(int i = 0; i <= 5; ++i)
    {
        while(guess != randomNumber)
        {
            printf("Guess a number from 0 and 20: \n");
            scanf("%d", &guess);
        }
        printf("Congrats you win");
        break;
    }
    printf("Sorry you failed");

    return 0;
}

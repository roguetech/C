#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned long long sum = 0LL; //Stores the sum of the integers
unsigned int count = 0; // the number of integers to be summed

//Read the number of integers to be summed
printf("\nEnter the number of integers you want ro sum: ");
scanf(" %u", &count);

//Sum integers from 1 to count
for(unsigned int i = 1; i <=count; ++i)
	sum += i;

//OR
//for(unsigned int i = 1; i <= count; sum += i++);

printf("\nTotal of the first %u numbers is %llu\n", count, sum);

    return 0;
}
